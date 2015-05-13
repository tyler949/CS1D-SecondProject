#ifndef GRAPH_CLASS_H
#define GRAPH_CLASS_H

#include "header.h"

class vertex;

class edge
{
    public:
        // C O N S T R U C T O R S
        edge() :
            origin     (NULL),
            destination(NULL),
            weight     (0),
            visited    (false){  }
        edge(vertex *o,
             vertex *d,
             int w,
             bool v) :
            origin     (o),
            destination(d),
            weight     (w),
            visited    (v){  }

        // D E S T R U C T O R S
        ~edge() {  }

        // G E T T E R S
        vertex *get_origin     () { return origin;      }
        vertex *get_destination() { return destination; }
        int    get_weight      () { return weight;      }
        bool   get_visited     () { return visited;     }

        // S E T T E R S
        void set_origin     (vertex *o) { origin      = o; }
        void set_destination(vertex *d) { destination = d; }
        void set_weight     (int w    ) { weight      = w; }
        void set_visited    (bool v   ) { visited     = v; }

    private:
        vertex *origin;
        vertex *destination;
        int    weight;
        bool   visited;
};

class vertex
{
    public:
        // C O N S T R U C T O R S
        vertex() :
            team   (NULL),
            key    (0),
            visited(false) {  }
        vertex(baseball_team *t,
               int k,
               bool v) :
            team   (t),
            key    (k),
            visited(v) {  }

        // D E S T R U C T O R S
        ~vertex() {  }

        // G E T T E R S
        baseball_stadium *get_stadium () { return team->get_stadium(); }
        baseball_team    *get_team    () { return team;                }
        int              get_key      () { return key;                 }
        bool             get_visited  () { return visited;             }
        QVector<edge*>   get_edges    () { return edges;               }
        vertex           *get_vertex  () { return this;                }
        edge             *get_shortest();

        // S E T T E R S
        void set_team   (baseball_team *t) { team    = t; }
        void set_key    (int k           ) { key     = k; }
        void set_visited(bool v          ) { visited = v; }
        void set_edge   (vertex *d,
                         int w           );

    private:
        baseball_team  *team;
        int            key;
        bool           visited;
        QVector<edge*> edges;
};

class graph
{
public:
    // C O N S T R U C T O R S
    graph() {  }
    graph(QVector<baseball_team*> tms);

    // D E S T R U C T O R S
    ~graph() {  }

    // G E T T E R S
    QVector<vertex*> get_vertices() { return vertices; }

    // P R I N T E R S
    void print_vertex_edges();

    // A L G O R I T H M S
    QVector<edge*> djikstras(QVector<baseball_team*> tms, baseball_team *start);

    // P R I M S
    QVector<edge*> prims();

private:
    QVector<vertex*> vertices;

    void create_vertices(QVector<baseball_team*> tms);
    void construct_edges();
    void unvisit_all();
    bool is_team_in_vec(QVector<baseball_team*> tms, baseball_team *tm);
    vertex *with_name(QString name);
};

#endif
