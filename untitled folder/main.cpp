
#include "Graph.h"

int main()
{
    UndirectedGraph jordansGraph;
    baseball_stadium s1, s2, s3, s4, s5, s6, s7, s8, s9;
    s1.setName("first stadium");
    s2.setName("second stadium");
    s3.setName("third stadium");
    s4.setName("fourth stadium");
    s5.setName("fifth stadium");
    s6.setName("sixth stadium");
    s7.setName("seventh stadium");
    s8.setName("eighth stadium");
    s9.setName("ninth stadium");
    jordansGraph.addVertex(s1);
    jordansGraph.addVertex(s2);
    jordansGraph.addVertex(s3);
    jordansGraph.addVertex(s4);
    jordansGraph.addVertex(s5);
    jordansGraph.addVertex(s6);
    jordansGraph.addVertex(s7);
    jordansGraph.addVertex(s8);
    jordansGraph.addVertex(s9);
    jordansGraph.addEdgeFG(s1, s2, 7);
    jordansGraph.addEdgeFG(s1, s3, 4);
    jordansGraph.addEdgeFG(s1, s4, 5);
    jordansGraph.addEdgeFG(s2, s3, 2);
    jordansGraph.addEdgeFG(s2, s5, 25);
    jordansGraph.addEdgeFG(s3, s8, 9);
    jordansGraph.addEdgeFG(s4, s6, 9);
    jordansGraph.addEdgeFG(s5, s7, 10);
    jordansGraph.addEdgeFG(s6, s8, 20);
    jordansGraph.addEdgeFG(s7, s9, 2);
    jordansGraph.addEdgeFG(s8, s9, 3);

    jordansGraph.printGraph();
    
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "running Dijkstra's Algorithm" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    
    vector<Vertex>::iterator tempVertex;
    tempVertex = jordansGraph.findVertex(s1);
    jordansGraph.dijkstras(tempVertex);
    
    cout << jordansGraph.getSpecificDistance(0) << endl;
    cout << jordansGraph.getSpecificDistance(1) << endl;
    cout << jordansGraph.getSpecificDistance(2) << endl;
    cout << jordansGraph.getSpecificDistance(3) << endl;
    cout << jordansGraph.getSpecificDistance(4) << endl;
    cout << jordansGraph.getSpecificDistance(5) << endl;
    cout << jordansGraph.getSpecificDistance(6) << endl;
    cout << jordansGraph.getSpecificDistance(7) << endl;
    cout << jordansGraph.getSpecificDistance(8) << endl;
    
//------------------------------------------------------------------
//    vector<vector<Vertex>::iterator>trip;
//    trip.push_back(jordansGraph.findVertex(s1));
//    trip.push_back(jordansGraph.findVertex(s5));
//    trip.push_back(jordansGraph.findVertex(s9));
//
//    for (int i = 0; i < trip.size(); i++){
//        jordansGraph.dijkstras(trip.at(i));
//    }

    cout << endl << "done" << endl;
    return 0;
}
