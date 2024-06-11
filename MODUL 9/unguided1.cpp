#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

typedef map<string, int> DistanceMap;
typedef map<string, DistanceMap> Graph;

void addEdge(Graph &graph, const string &source, const string &destination, int distance)
{
    graph[source][destination] = distance;
}

void printGraph(const Graph &graph)
{
    vector<string> nodes;
    for (const auto &pair : graph)
    {
        nodes.push_back(pair.first);
    }
    
    cout << setw(10) << " ";
    for (const auto &node : nodes)
    {
        cout << setw(10) << node;
    }
    cout << endl;

    for (const auto &source : nodes)
    {
        cout << setw(10) << source;
        for (const auto &destination : nodes)
        {
            cout << setw(10) << graph.at(source).at(destination);
        }
        cout << endl;
    }
}

int main()
{
    int numNodes;
    cout << "Silahkan masukkan jumlah simpul: ";
    cin >> numNodes;
    vector<string> nodes(numNodes);
    cout << "Silahkan masukkan nama simpul:\n";
    for (int i = 0; i < numNodes; ++i)
    {
        cout << "Simpul " << i + 1 << ": ";
        cin >> nodes[i];
    }

    Graph graph;
    cout << "Silahkan masukkan bobot antar simpul\n";
    for (int i = 0; i < numNodes; ++i)
    {
        for (int j = 0; j < numNodes; ++j)
        {
            string source = nodes[i];
            string destination = nodes[j];
            int distance;
            cout << source << " => " << destination << " = ";
            cin >> distance;
            addEdge(graph, source, destination, distance);
        }
    }

    printGraph(graph);
    return 0;
}
