

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
    visited = false;
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
void Vertex::addEdgeFV(Edge passedEdge)
{
    edges.push_back(passedEdge);
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
    cout << passedEdge->getOrigin()->theStadium.getName() <<
    "----" << passedEdge->getCost() << "----->" <<
    passedEdge->getDestination()->theStadium.getName() <<
    endl;
}
//----------------------------------------------------------------
int UndirectedGraph::getSizeVertices()
{
    return (int)vertices.size();
}
//----------------------------------------------------------------
int UndirectedGraph::distance(vector<Vertex>::iterator passedVertex1,
                              vector<Vertex>::iterator passedVertex2)
{
    vector<Edge>::iterator tempEdge1;
    vector<Edge>::iterator tempEdge2;
    
    tempEdge1 = passedVertex1->getBegin();
    tempEdge2 = passedVertex2->getBegin();
    for (int i = 0; i < passedVertex1->getSizeEdges(); i++){
        while (tempEdge1->getCost() != tempEdge2->getCost() &&
               tempEdge2 != passedVertex2->getEnd()){
            if (tempEdge1->getCost() != tempEdge2->getCost()){
                tempEdge2++;
            }
            else{
                i = passedVertex1->getSizeEdges();
                break;
            }
        }
        tempEdge1++;
        tempEdge2 = passedVertex2->getBegin();
    }
    tempEdge1--;
    return tempEdge1->getCost();
}
//----------------------------------------------------------------
void UndirectedGraph::dijkstras(vector<Vertex>::iterator passedVertex)
{
    vector<Vertex>::iterator tempVertex;
    vector<Edge>::iterator tempEdge;
    vector<trip>::iterator holdTrip;
    vector<trip> t;
    
    passedVertex->setVisited(true);
    t.push_back(trip(passedVertex, 0, passedVertex));
    holdTrip = t.begin();
    
    while (t.size() < vertices.size()) {
        
        tempVertex = holdTrip->getVertex();
        int tempVar = tempVertex->getSizeEdges();
        
        for (int i = 0; i < tempVar; i++) {
            cout << "test 1" << endl;
            tempEdge = findSmallestEdge(tempVertex);
            if (tempEdge->getDestination()->getVisited() == false) {
                printVisit(tempEdge);
                tempEdge->getDestination()->setVisited(true);

                t.push_back(trip(tempEdge->getDestination(),
                                 tempEdge->getCost(),
                                 tempEdge->getOrigin()));
                
                cout << "test 2" << endl;
                
            }

        }
        cout << "outside for loop" << endl;

        holdTrip++;

    }
}
//----------------------------------------------------------------


