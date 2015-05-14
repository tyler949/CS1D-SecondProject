

#include "Graph.h"
//----------------------------------------------------------------
//----------------------------------------------------------------
//---------------------EDGE--------------------------------------
Edge::Edge(vector<Vertex>::iterator passedOrigin,
             vector<Vertex>::iterator passedDestination,
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
vector<Vertex>::iterator Edge::getOrigin()
{
    return origin;
}
//----------------------------------------------------------------
vector<Vertex>::iterator Edge::getDestination()
{
    return destination;
}
//----------------------------------------------------------------
//----------------------------------------------------------------
//---------------------VERTEX-------------------------------------
Vertex::Vertex(baseball_stadium s)
{
    theStadium = s;
    distance = numeric_limits<int>::max();
}
//----------------------------------------------------------------
vector<Edge>::iterator Vertex::getBegin()
{
    vector<Edge>::iterator tempEdge;
    tempEdge = edges.begin();
    return tempEdge;
}
//----------------------------------------------------------------
vector<Edge>::iterator Vertex::getEnd()
{
    vector<Edge>::iterator tempEdge;
    tempEdge = edges.end();
    return tempEdge;
}
//----------------------------------------------------------------
int Vertex::getSizeEdges()
{
    return int(edges.size());
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
int Vertex::getDistance()
{
    return distance;
}
//----------------------------------------------------------------
void Vertex::setDistance(int d)
{
    distance = d;
}
//----------------------------------------------------------------
void Vertex::addEdgeFV(Edge passedEdge)
{
    edges.push_back(passedEdge);
}
//----------------------------------------------------------------
void Vertex::setEdgeVisit(bool passedBool)
{
    edgeVisit = passedBool;
}
//----------------------------------------------------------------
bool Vertex::getEdgeVisit()
{
    return edgeVisit;
}
//----------------------------------------------------------------
void Vertex::resetDistance()
{
    distance = numeric_limits<int>::max();
}
//----------------------------------------------------------------
//----------------------------------------------------------------
//----------------------GRAPH-------------------------------------
void UndirectedGraph::addVertex(baseball_stadium s)
{
    vertices.push_back(Vertex(s));
}
//----------------------------------------------------------------
//s1 is the origin, s2 is the destination
void UndirectedGraph::addEdgeFG(baseball_stadium s1, baseball_stadium s2,
                                int passedCost)
{
    vector<Vertex>::iterator tempVertex1;
    vector<Vertex>::iterator tempVertex2;
    tempVertex1 = findVertex(s1);
    tempVertex2 = findVertex(s2);

    Edge tempEdge1 = Edge(tempVertex1, tempVertex2, passedCost);
    tempVertex1->addEdgeFV(tempEdge1);
    Edge tempEdge2 = Edge(tempVertex2, tempVertex1, passedCost);
    tempVertex2->addEdgeFV(tempEdge2);
}
//----------------------------------------------------------------
vector<Vertex>::iterator UndirectedGraph::findVertex(baseball_stadium s)
//getName() will be replaced with whatever the name of the method
//from baseball_class in austins method is
{
    vector<Vertex>::iterator tempVertex;
    tempVertex = vertices.begin();
    
    while (tempVertex->theStadium.getName() != s.getName() &&
           tempVertex != vertices.end()) {
        tempVertex++;
    }
    
    return tempVertex;
}
//----------------------------------------------------------------
vector<Edge>::iterator UndirectedGraph::findSmallestEdge(vector<Vertex>::iterator passedVertex)
{//wont return an edge that has been visited
    vector<Edge>::iterator tempEdge1;
    vector<Edge>::iterator tempEdge2;
    
    tempEdge1 = passedVertex->getBegin();
    tempEdge2 = tempEdge1;
    tempEdge2++;
    
    for (int i = 1; i < passedVertex->getSizeEdges(); i++) {
        if (tempEdge2 == passedVertex->getEnd()) {
            return tempEdge1;
        }
        
        if (tempEdge1->getDestination()->getEdgeVisit() == true){
            tempEdge1++;
            tempEdge2++;
        }
        else if (tempEdge2->getCost() < tempEdge1->getCost()) {
            if (tempEdge2->getDestination()->getEdgeVisit() == false) {
                tempEdge1 = tempEdge2;
                tempEdge2++;
            }
        }
        else {
            tempEdge2++;
        }
    }
    
    tempEdge1->getDestination()->setEdgeVisit(true);
    return tempEdge1;
}
//----------------------------------------------------------------
//----------------------------------------------------------------
void UndirectedGraph::printGraph()
//getName() will be replaced with whatever the name of the method
//from baseball_class in austins method is
{
    vector<Vertex>::iterator tempVertex;
    vector<Edge>::iterator tempEdge;
    tempVertex = vertices.begin();

    for (int i = 0; i < vertices.size(); i++) {
        tempEdge = tempVertex->getBegin();
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << tempVertex->theStadium.getName() << " has edges:" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        for (int j = 0; j < tempVertex->getSizeEdges(); j++) {
            cout << tempEdge->getOrigin()->theStadium.getName();
            cout << "-----" << tempEdge->getCost() << "-----";
            cout << tempEdge->getDestination()->theStadium.getName();
            cout << endl << endl;
            tempEdge++;
        }
        tempVertex++;
    }
    
}
//----------------------------------------------------------------
void UndirectedGraph::printVisit(vector<Edge>::iterator passedEdge)
{
    cout << "----" << passedEdge->getDestination()->getDistance()
    << "----->" << passedEdge->getDestination()->theStadium.getName()
    << endl;
}
//----------------------------------------------------------------
int UndirectedGraph::getSpecificDistance(int x)
{
    return vertices.at(x).getDistance();
}
//----------------------------------------------------------------
int UndirectedGraph::getSizeVertices()
{
    return (int)vertices.size();
}
//----------------------------------------------------------------
void UndirectedGraph::resetEdgeVisit(vector<Vertex>::iterator passedVertex)
{
    vector<Edge>::iterator tempEdge;
    
    for (int i = 0; i < passedVertex->getSizeEdges(); i++) {
        tempEdge = findSmallestEdge(passedVertex);
        tempEdge->getDestination()->setEdgeVisit(false);
    }

}
//----------------------------------------------------------------
void UndirectedGraph::resetDistancesFG()
{
    vector<Vertex>::iterator tempVertex;
    tempVertex = vertices.begin();
    
    for (int i = 0; i < vertices.size(); i++) {
        tempVertex->resetDistance();
    }
}
//----------------------------------------------------------------
void UndirectedGraph::dijkstras(vector<Vertex>::iterator passedVertex)
{
    vector<Vertex>::iterator tempVertex;
    vector<Edge>::iterator tempEdge;

    tempVertex = passedVertex;
    tempVertex->setVisited(true);
    tempVertex->setDistance(0);
    
    for (int i = 0; i < getSizeVertices(); i++) {
        for (int j = 0; j < tempVertex->getSizeEdges(); j++) {
            tempEdge = findSmallestEdge(tempVertex);
            
            if (tempEdge->getDestination()->getDistance() > tempEdge->getOrigin()->getDistance() + tempEdge->getCost())
            {
                tempEdge->getDestination()->setDistance(tempEdge->getOrigin()->getDistance() + tempEdge->getCost());
                printVisit(tempEdge);
                tempEdge++;
            }
        }
        resetEdgeVisit(tempVertex);//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        tempVertex->setVisited(true);
        tempVertex++;
    }
}
//----------------------------------------------------------------
//----------------------------------------------------------------
//----------------------------------------------------------------

