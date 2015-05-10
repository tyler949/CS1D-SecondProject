

#include "Graph.h"
//----------------------------------------------------------------
//----------------------------------------------------------------
//---------------------EDGE--------------------------------------
Edge::Edge(QVector<Vertex>::iterator passedOrigin,
             QVector<Vertex>::iterator passedDestination,
             int passedCost)
{
    origin = passedOrigin;
    destination = passedDestination;
    cost = passedCost;
}
//----------------------------------------------------------------
int Edge::getCost()
{
    return cost;
}
//----------------------------------------------------------------
QVector<Vertex>::iterator Edge::getOrigin()
{
    return origin;
}
//----------------------------------------------------------------
QVector<Vertex>::iterator Edge::getDestination()
{
    return destination;
}
//----------------------------------------------------------------
//----------------------------------------------------------------
//---------------------VERTEX-------------------------------------
Vertex::Vertex(baseball_stadium s)
{
    myStadium = s;
    visited = false;
}
//----------------------------------------------------------------
QVector<Edge>::iterator Vertex::getBegin()
{
    QVector<Edge>::iterator tempEdge;
    tempEdge = edges.begin();
    return tempEdge;
}
//----------------------------------------------------------------
QVector<Edge>::iterator Vertex::getEnd()
{
    QVector<Edge>::iterator tempEdge;
    tempEdge = edges.end();
    return tempEdge;
}
//----------------------------------------------------------------
int Vertex::getSizeEdges()
{
    return (int)edges.size();
}
//----------------------------------------------------------------
bool Vertex::getVisited()
{
    return visited;
}
//----------------------------------------------------------------
void Vertex::setVisited(bool passedBool)
{
    visited = passedBool;
}
//----------------------------------------------------------------
void Vertex::addEdgeFV(Edge passedEdge)
{
    edges.push_back(passedEdge);
}
//----------------------------------------------------------------
//----------------------------------------------------------------
//----------------------GRAPH-------------------------------------
void UndirectedGraph::addVertex(baseball_stadium s)
{
    vertices.push_back(new Vertex(s));
}
//----------------------------------------------------------------
//passedString1 is the origin, passedString2 is the destination
void UndirectedGraph::addEdgeFG(baseball_stadium s1, baseball_stadium s2,
                                int weight)
{
    QVector<Vertex>::iterator tempVertex1;
    QVector<Vertex>::iterator tempVertex2;
    tempVertex1 = findVertex(s1);
    tempVertex2 = findVertex(s2);

    Edge tempEdge = *new Edge(tempVertex1, tempVertex2, passedCost);
    tempVertex1->addEdgeFV(tempEdge);
//    tempVertex2->addEdgeFV(tempEdge);
}
//----------------------------------------------------------------
QVector<Vertex>::iterator UndirectedGraph::findVertex(QString passedString)
{
    QVector<Vertex>::iterator tempIT;
    tempIT = vertices.begin();

    while (tempIT->getName() != passedString &&
           tempIT != vertices.end()) {
        tempIT++;
    }

    return tempIT;
}
//----------------------------------------------------------------
QVector<Edge>::iterator UndirectedGraph::findSmallestEdge(QVector<Vertex>::iterator
                                                          passedVertex)
{//wont return an edge that has been visited
    QVector<Edge>::iterator tempEdge1;
    QVector<Edge>::iterator tempEdge2;

    tempEdge1 = passedVertex->getBegin();
    tempEdge2 = tempEdge1 + 1;

    for (int i = 1; i < passedVertex->getSizeEdges(); i++) {
        if (tempEdge2 == passedVertex->getEnd()) {
            return tempEdge1;
        }

        if (tempEdge2->getCost() < tempEdge1->getCost()) {
            if (tempEdge2->getDestination()->getVisited() == false) {
                tempEdge1 = tempEdge2;
                tempEdge2++;
            }
            else {
                tempEdge2++;
            }
        }
        else if (tempEdge1->getDestination()->getVisited() == true) {
            tempEdge1++;
            tempEdge2++;
        }
        else {
            tempEdge2++;
        }
    }

    return tempEdge1;
}
//----------------------------------------------------------------
void UndirectedGraph::printGraph()
{
    QVector<Vertex>::iterator tempVertex;
    QVector<Edge>::iterator tempEdge;
    tempVertex = vertices.begin();

    for (int i = 0; i < vertices.size(); i++) {
        tempEdge = tempVertex->getBegin();
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << tempVertex->getName() << " has edges:" << std::endl;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        for (int j = 0; j < tempVertex->getSizeEdges(); j++) {
            std::cout << tempEdge->getOrigin()->getName();
            std::cout << "-----" << tempEdge->getCost() << "-----";
            std::cout << tempEdge->getDestination()->getName();
            std::cout << std::endl << std::endl;
            tempEdge++;
        }
        tempVertex++;
    }

}
//----------------------------------------------------------------
void UndirectedGraph::printVisit(QVector<Edge>::iterator passedEdge)
{
    std::cout << passedEdge->getOrigin()->getName() <<
    "----" << passedEdge->getCost() << "----->" <<
    passedEdge->getDestination()->getName() <<
    std::endl;
}
//----------------------------------------------------------------
int UndirectedGraph::getSizeVertices()
{
    return (int)vertices.size();
}
//----------------------------------------------------------------
int UndirectedGraph::distance(QVector<Vertex>::iterator passedVertex1,
                              QVector<Vertex>::iterator passedVertex2)
{
    QVector<Edge>::iterator tempEdge1;
    QVector<Edge>::iterator tempEdge2;

    tempEdge1 = passedVertex1->getBegin();
    tempEdge2 = passedVertex2->getBegin();
    for (int i = 0; i < passedVertex1->getSizeEdges(); i++){
        while (tempEdge1->getCost() != tempEdge2->getCost()){
            if (tempEdge1->getCost() != tempEdge2->getCost()){
                tempEdge2++;
            }
            else{
                i = passedVertex1->getSizeEdges();
                break;
            }
        }
        tempEdge1++;
    }

    return <#expression#>
}
//----------------------------------------------------------------
void UndirectedGraph::dijkstras(QVector<Vertex>::iterator passedVertex)
{
    QVector<Vertex>::iterator tempVertex;
    QVector<Edge>::iterator tempEdge;
    QVector<trip>::iterator holdTrip;
    QVector<trip> t;

    passedVertex->setVisited(true);
    t.push_back(trip(passedVertex, 0, passedVertex));
    holdTrip = t.begin();

    while (t.size() < vertices.size()) {

        tempVertex = holdTrip->getVertex();
        int tempVar = tempVertex->getSizeEdges();

        for (int i = 0; i < tempVar; i++) {
            tempEdge = findSmallestEdge(tempVertex);
            if (tempEdge->getDestination()->getVisited() == false) {
                printVisit(tempEdge);
                tempEdge->getDestination()->setVisited(true);

                t.push_back(trip(tempEdge->getDestination(),
                                 tempEdge->getCost(),
                                 tempEdge->getOrigin()));
            }

        }
        holdTrip++;
    }
}
//----------------------------------------------------------------


