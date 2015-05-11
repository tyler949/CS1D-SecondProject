
//#ifndef __CS1D_ass_11_DFS_BFS__Graph__
//#define __CS1D_ass_11_DFS_BFS__Graph__

//#include <iostream>
//#include <QString>
//#include <QVector>
//#include <queue>
//#include <iomanip>
//#include <baseball_stadium_class.h>

//class Vertex;
////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//class Edge
//{
//public:
//    Edge(QVector<Vertex>::iterator passedOrigin,
//         QVector<Vertex>::iterator passedDestination,
//         int passedCost);

//    int getCost();
//    QVector<Vertex>::iterator getOrigin();
//    QVector<Vertex>::iterator getDestination();

//private:
//    QVector<Vertex>::iterator origin;
//    QVector<Vertex>::iterator destination;
//    int cost;

//};
////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//class Vertex
//{
//public:
//    Vertex(baseball_stadium s);

//    QVector<Edge>::iterator getBegin();
//    QVector<Edge>::iterator getEnd();
//    int getSizeEdges();
//    bool getVisited();
//    void setVisited(bool passedBool);

//    void addEdgeFV(Edge passedEdge);

//private:
//    baseball_stadium myStadium;
//    QVector<Edge>edges;
//    bool visited;
//};
////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//class trip
//{
//public:
//    trip(QVector<Vertex>::iterator passedVertexIT, int x,
//         QVector<Vertex>::iterator passedParentVertexIT)
//    {
//        myVertex = passedVertexIT;
//        costToParent = x;
//        parentVertex = passedParentVertexIT;
//    }

//    QVector<Vertex>::iterator getVertex(){return myVertex;}

//    QVector<Vertex>::iterator getParent(){return parentVertex;}

//    int getCostToParent(){return costToParent;}

//private:
//    QVector<Vertex>::iterator myVertex;
//    int costToParent;
//    QVector<Vertex>::iterator parentVertex;
//};
////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//class UndirectedGraph
//{
//public:
//    void addVertex(baseball_stadium s);
//    //s1 is the origin, s2 is the destination
//    void addEdgeFG(baseball_stadium s1, baseball_stadium s2,
//                   int weight);
//    QVector<Vertex>::iterator findVertex(baseball_stadium s);
//    //returns the smallest edge that hasnt been visited
//    QVector<Edge>::iterator findSmallestEdge(QVector<Vertex>::iterator
//                                             passedVertex);

//    void printGraph();
//    void printVisit(QVector<Edge>::iterator passedEdge);

//    int getSizeVertices();
//    void dijkstras(QVector<Vertex>::iterator passedVertex);
//    int distance(QVector<Vertex>::iterator passedVertex1,
//                 QVector<Vertex>::iterator passedVertex2);

//private:
//    QVector<Vertex> vertices;
//};
////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//#endif

///*
// *
//#ifndef __CS1D_ass_11_DFS_BFS__Graph__
//#define __CS1D_ass_11_DFS_BFS__Graph__

//#include <iostream>
//#include <QString>
//#include <QVector>
//#include <queue>
//#include <iomanip>

//class Vertex;
////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//class Edge
//{
//public:
//    Edge(QVector<Vertex>::iterator passedOrigin,
//         QVector<Vertex>::iterator passedDestination,
//         int passedCost);

//    int getCost();
//    QVector<Vertex>::iterator getOrigin();
//    QVector<Vertex>::iterator getDestination();

//private:
//    QVector<Vertex>::iterator origin;
//    QVector<Vertex>::iterator destination;
//    int cost;

//};
////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//class Vertex
//{
//public:
//    Vertex(QString passedString);

//    QString getName();
//    QVector<Edge>::iterator getBegin();
//    QVector<Edge>::iterator getEnd();
//    int getSizeEdges();
//    bool getVisited();
//    void setVisited(bool passedBool);
//    void addEdgeFV(Edge passedEdge);

//private:
//    QVector<Edge>edges;
//    QString name;
//    bool visited;
//};
////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//class trip
//{
//public:
//    trip(QVector<Vertex>::iterator passedVertexIT, int x,
//         QVector<Vertex>::iterator passedParentVertexIT)
//    {
//        myVertex = passedVertexIT;
//        costToParent = x;
//        parentVertex = passedParentVertexIT;
//    }

//    QVector<Vertex>::iterator getVertex(){return myVertex;}

//    QVector<Vertex>::iterator getParent(){return parentVertex;}

//    int getCostToParent(){return costToParent;}

//private:
//    QVector<Vertex>::iterator myVertex;
//    int costToParent;
//    QVector<Vertex>::iterator parentVertex;
//};
////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//class UndirectedGraph
//{
//public:
//    void addVertex(QString passedname);
//    //passedString1 is the origin, passedString2 is the destination
//    void addEdgeFG(QString passedString1,
//                 QString passedString2,
//                 int passedCost);
//    QVector<Vertex>::iterator findVertex(QString passedString);
//    //returns the smallest edge that hasnt been visited
//    QVector<Edge>::iterator findSmallestEdge(QVector<Vertex>::iterator
//                                             passedVertex);

//    void printGraph();
//    void printVisit(QVector<Edge>::iterator passedEdge);

//    int getSizeVertices();
//    void dijkstras(QVector<Vertex>::iterator passedVertex);
//    int distance(QVector<Vertex>::iterator passedVertex1,
//                 QVector<Vertex>::iterator passedVertex2);

//private:
//    QVector<Vertex> vertices;
//};
//*/
