#include "Polygon.h"

void Polygon::add_vertex(int x, int y) {
    _vertices.emplace_back(x, y);
}

std::ostream& operator<<(std::ostream& stream, const Polygon& poly) {
    for (const auto& value : poly._vertices) {
        stream << "(" << value.first << "," << value.second << ") ";
    }
    return stream;
}

const Vertex& Polygon::get_vertex(size_t index) const {
    return _vertices[index];
}