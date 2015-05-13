#include "graph_class.h"

void vertex::set_edge(vertex *d, int w)
{
    edge *new_edge = new edge(get_vertex(), d, w, false);
    edges.push_back(new_edge);
}

edge* vertex::get_shortest()
{
    edge *shortest = edges.at(0);

    for(int i = 0; i < edges.size(); i++)
    {
        if(edges.at(i)->get_weight() < shortest->get_weight())
        {
            shortest = edges.at(i);
        }
    }

    return shortest;
}

graph::graph(QVector<baseball_team*> tms)
{
    create_vertices(tms);
    construct_edges();
}

void graph::create_vertices(QVector<baseball_team*> tms)
{
    // Jordan's Path: "C:/Users/Jordan/Desktop/Project-2/map_data.txt"
    QFile file("C:/Users/Jordan/Desktop/Project-2/map_data.txt");

    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "\n\nVERTICES: FAILED TO OPEN FILE\n\n";
    }
    else
    {
        qDebug() << "\n\nVERTICES: FILE OPENED SUCCESSFULLY\n\n";
        QTextStream in(&file);

        /*
         * Format of "map_data.txt":
         *   - baseball_team vector index
         *   - number of connections
         *   - vector index of connection
         *   - weight of edge
         */

        QString string;
        int i, j;

        while(!in.atEnd())
        {
            string = in.readLine();
            i = string.toInt();

            vertex *new_vertex = new vertex(tms.at(i)->get_this(), i, false);
            vertices.push_back(new_vertex);

            string = in.readLine();
            j = string.toInt();

            for(i = 0; i < j; i++)
            {
                in.readLine();
                in.readLine();
            }

            in.readLine();
        }

        file.close();
        qDebug() << "\n\nVERTICES: FILE CLOSED\n\n";
    }
}

void graph::construct_edges()
{
    // Jordan's Path: "C:/Users/Jordan/Desktop/Project-2/map_data.txt"
    QFile file("C:/Users/Jordan/Desktop/Project-2/map_data.txt");

    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "\n\nEDGES: FAILED TO OPEN FILE\n\n";
    }
    else
    {
        qDebug() << "\n\nEDGES: FILE OPENED SUCCESSFULLY\n\n";
        QTextStream in(&file);

        /*
         * Format of "map_data.txt":
         *   - baseball_team vector index
         *   - number of connections
         *   - vector index of connection
         *   - weight of edge
         */

        QString string;
        int i, j, k, mat, wgt;

        while(!in.atEnd())
        {
            string = in.readLine();
            i = string.toInt();

            string = in.readLine();
            k = string.toInt();

            for(j = 0; j < k; j++)
            {
                string = in.readLine();
                mat = string.toInt();

                string = in.readLine();
                wgt = string.toInt();

                vertices.at(i)->set_edge(vertices.at(mat)->get_vertex(), wgt);
            }

            in.readLine();
        }

        file.close();
        qDebug() << "\n\nEDGES: FILE CLOSED\n\n";
    }
}

void graph::print_vertex_edges()
{
    for(int i = 0; i < vertices.size(); i++)
    {
        for(int j = 0; j < vertices.at(i)->get_edges().size(); j++)
        {
            qDebug() << vertices.at(i)->get_team()->get_stadium_name()
                     << "->"
                     << vertices.at(i)->get_edges().at(j)->get_destination()->get_team()->get_stadium_name()
                     << endl;
        }
        qDebug() << endl;
    }
}

QVector<edge*> graph::prims()
{
    unvisit_all();

    QVector<edge*> chosen;
    QVector<edge*> possible;
    QVector<vertex*> visited;
    edge *shortest;

    vertices.at(0)->set_visited(true);
    visited.push_back(vertices.at(0));
    shortest = visited.at(0)->get_shortest();

    while(chosen.size() < vertices.size() - 1)
    {
        possible.erase(possible.begin(), possible.end());

        for(int i = 0; i < visited.size(); i++)
        {
            for(int j = 0; j < visited.at(i)->get_edges().size(); j++)
            {
                if(visited.at(i)->get_edges().at(j)->get_destination()->get_visited() == false)
                {
                    possible.push_back(visited.at(i)->get_edges().at(j));
                }
            }
        }

        shortest = possible.at(0);

        for(int i = 0; i < possible.size(); i++)
        {
            if(possible.at(i)->get_weight() <= shortest->get_weight())
            {
                shortest = possible.at(i);
            }
        }

        shortest->get_destination()->set_visited(true);
        visited.push_back(shortest->get_destination());
        chosen.push_back(shortest);
    }
    return chosen;
}

void graph::unvisit_all()
{
    for(int i = 0; i < vertices.size(); i++)
    {
        vertices.at(i)->set_visited(false);


    }
}

QVector<edge*> graph::djikstras(QVector<baseball_team*> tms, baseball_team *start)
{

}

bool graph::is_team_in_vec(QVector<baseball_team*> tms, baseball_team *tm)
{
    for(int i = 0; i < tms.size(); i++)
    {
        if(tms.at(i) == tm)
        {
            return true;
        }
    }

    return false;
}

vertex *graph::with_name(QString name)
{
    for(int i = 0; i < vertices.size(); i++)
    {
        if(vertices.at(i)->get_team()->get_team_name() == name)
        {
            return vertices.at(i);
        }
    }

    return vertices.at(0);
}
