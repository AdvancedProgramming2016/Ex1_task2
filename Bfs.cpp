
#include <queue>
#include <algorithm>
#include "Bfs.h"

Bfs::Bfs(Graph *graph, Point source, Point dest) : m_graph(graph), m_source(source), m_dest(dest) {

}

void Bfs::get_route() {

    std::queue<Vertex *> queue;
    std::vector<Vertex>  path;
    path.reserve(m_graph->get_edges().size());
    Vertex *v;

    shortest_path.reserve(path.size());
    v = m_graph->get_vertex(m_source);
    v->set_visited();
    queue.push(v);

    while (!queue.empty()) {

        v = queue.front();
        path.push_back(*v);
        queue.pop();

        if (v->getM_point() == m_dest) {

            shortest_path = search_fathers(path);
        }

        Vertex *temp;

        for (int i = 0; i < v->getNum_of_relations(); ++i) {

            temp = v->getM_relations_list().at(i);

            if (!temp->isM_is_visited()) {
                temp->set_visited();
                temp->setFather(*v);
                queue.push(temp);

            }
        }
    }
}

std::vector<Point> Bfs::search_fathers(std::vector<Vertex> vector) {

    std::vector<Point> retVector;
    retVector.reserve(vector.size());

    retVector.push_back(
            vector.at(vector.size() - 1).getM_point());
    Vertex *v = vector.at(vector.size() - 1).getFather();

    while (v->getFather() != 0) {

        retVector.push_back(v->getM_point());
        v = v->getFather();
    }

    retVector.push_back(vector.at(0).getM_point());

    return retVector;
}

void Bfs::print_points() {

    for (int i = shortest_path.size() - 1; i >= 0; --i) {

        std::cout << shortest_path.at(i) << std::endl;
    }
}
