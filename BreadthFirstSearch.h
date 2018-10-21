#pragma once

namespace Graph {

template <typename IncidenceGraph, typename Queue, typename ColorMap>
void BreadthFirstVisit (
        const IncidenceGraph& graph, 
        typename GraphTraits<IncidenceGraph>::VertexDescriptor source,
        Queue& queue,
        ColorMap color_map) {
    using GTraits = GraphTraits<IncidenceGraph>;
    using Vertex = GTraits::VertexDescriptor;

    Put(color, source, Color::Gray());
    queue.Push(source);
}

} // Graph