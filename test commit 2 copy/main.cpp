
#include "Graph.h"

int main()
{
    UndirectedGraph stadiumGraph;
    baseball_stadium s1, s2, s3, s4, s5;
    s1.setName("first stadium");
    s2.setName("second stadium");
    s3.setName("third stadium");
    s4.setName("fourth stadium");
    s5.setName("fifth stadium");

    
    stadiumGraph.addVertex(s1);
    stadiumGraph.addVertex(s2);
    stadiumGraph.addVertex(s3);
    stadiumGraph.addVertex(s4);
    stadiumGraph.addVertex(s5);
    
    stadiumGraph.addEdgeFG(s1, s2, 35);
    stadiumGraph.addEdgeFG(s1, s3, 45);
    stadiumGraph.addEdgeFG(s1, s5, 50);
    stadiumGraph.addEdgeFG(s2, s3, 25);
    stadiumGraph.addEdgeFG(s2, s4, 30);
    stadiumGraph.addEdgeFG(s3, s4, 40);
    stadiumGraph.addEdgeFG(s4, s5, 55);
    
    stadiumGraph.printGraph();
    
    std::vector<Vertex>::iterator tempVertex;
    tempVertex = stadiumGraph.findVertex(s1);
    
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "running Dijkstra's Algorithm" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    
    stadiumGraph.dijkstras(tempVertex);
    
    return 0;
}
