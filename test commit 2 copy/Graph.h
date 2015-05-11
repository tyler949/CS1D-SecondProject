
#include <iostream>
#include <vector>
#include <iomanip>
#include "baseball_stadium_class.h"
using namespace std;

class Vertex;
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
class Edge
{
public:
    Edge(vector<Vertex>::iterator passedOrigin,
         vector<Vertex>::iterator passedDestination,
         int passedCost);
    
    int getCost();
    vector<Vertex>::iterator getOrigin();
    vector<Vertex>::iterator getDestination();
    
private:
    vector<Vertex>::iterator origin;
    vector<Vertex>::iterator destination;
    int cost;

};
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
class Vertex
{
public:
    Vertex(baseball_stadium s);             //constructor
    vector<Edge>::iterator getBegin();
    vector<Edge>::iterator getEnd();
    int getSizeEdges();
    bool getVisited();
    void setVisited(bool passedBool);
    int getDistance();
    void setDistance(int d);
    void addEdgeFV(Edge passedEdge);
    
    baseball_stadium theStadium;

private:
    int distance;
    vector<Edge>edges;
    bool visited;
};
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
class trip
{
public:
    trip(vector<Vertex>::iterator passedVertexIT, int x,
         vector<Vertex>::iterator passedParentVertexIT)
    {
        myVertex = passedVertexIT;
        costToStart = x;
        parentVertex = passedParentVertexIT;
    }
    
    vector<Vertex>::iterator getVertex(){return myVertex;}
    
    vector<Vertex>::iterator getParent(){return parentVertex;}
    
    int getCostToParent(){return costToStart;}
    
private:
    vector<Vertex>::iterator myVertex;
    int costToStart;
    vector<Vertex>::iterator parentVertex;
};
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
class UndirectedGraph
{
public:
    void addVertex(baseball_stadium s);
    //s1 is the origin, s2 is the destination
    void addEdgeFG(baseball_stadium s1, baseball_stadium s2,
                   int passedCost);
    vector<Vertex>::iterator findVertex(baseball_stadium s);
    //returns the smallest edge that hasnt been visited
    vector<Edge>::iterator findSmallestEdge(vector<Vertex>::iterator passedVertex);
    
    void printGraph();
    void printVisit(vector<Edge>::iterator passedEdge);
    
    int getSizeVertices();
    void dijkstras(vector<Vertex>::iterator passedVertex);
    int distance(vector<Vertex>::iterator passedVertex1,
                 vector<Vertex>::iterator passedVertex2);
    
private:
    vector<Vertex> vertices;
};
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
