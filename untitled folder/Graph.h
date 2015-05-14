
#include <iostream>
#include <vector>
#include <iomanip>
#include "baseball_stadium_class.h"
using namespace std;
#include <list>

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
    Vertex(baseball_stadium s);      //constructor
    vector<Edge>::iterator getBegin();
    vector<Edge>::iterator getEnd();
    
    void    setDistance(int d);
    void    setVisited(bool passedBool);
    void    setEdgeVisit(bool passedBool);

    int     getSizeEdges();
    int     getDistance();
    bool    getVisited();
    bool    getEdgeVisit();
    
    void    resetDistance();
    void    addEdgeFV(Edge passedEdge);
    
    baseball_stadium theStadium;

private:
    bool visited;
    bool edgeVisit;
    int distance;
    vector<Edge>edges;
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
    vector<Edge>::iterator findSmallestEdge(vector<Vertex>::iterator passedVertex);
    
    void printGraph();
    void printVisit(vector<Edge>::iterator passedEdge);
    
    void resetEdgeVisit(vector<Vertex>::iterator passedVertex);
    int getSpecificDistance(int x);
    int getSizeVertices();
    void resetDistancesFG();

    void dijkstras(vector<Vertex>::iterator passedVertex);

    
private:
    vector<Vertex> vertices;
};
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
