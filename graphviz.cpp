#include <fstream>
#include <string>

void createGraph(const std::vector<std::string>& coworkers) {
    std::ofstream file("coworker_graph.dot");

    // Start the Graphviz graph structure
    file << "graph G {\n";

    // Add coworkers as nodes
    for (const auto& coworker : coworkers) {
        file << "    \"" << coworker << "\";\n";
    }

    // Example of an edge between two coworkers (this could be dynamic based on availability)
    file << "    \"" << coworkers[0] << "\" -- \"" << coworkers[1] << "\";\n"; // Bob and Alice

    file << "}\n"; // Close the graph

    file.close();

    // Generate the PNG using Graphviz tool
    system("dot -Tpng coworker_graph.dot -o coworker_graph.png");
    std::cout << "Graph has been generated as 'coworker_graph.png'." << std::endl;
}
