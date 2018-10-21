#pragma once

namespace Graph {

template <typename IncidenceGraph, typename AStarHeuristic, typename ColorMap>
void AStarSearch (const IncidenceGraph& graph, AStarHeuristic heuristic, ColorMap color_map) {
    //std::priority_queue queue;
    BreadthFirstVisit(graph, color_map);
}

} // Graph