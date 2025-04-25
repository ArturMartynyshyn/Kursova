#include "Figure.h"
#include <iostream>

Figure::Figure(int count) {
    vertices.resize(count);
}

Figure::Figure(const Figure& other) : vertices(other.vertices) {}

Figure::Figure(Figure&& other) noexcept : vertices(std::move(other.vertices)) {}


Figure& Figure::operator=(const Figure& other) {
    if (this != &other) {
        vertices = other.vertices;
    }
    return *this;
}

Figure& Figure::operator=(Figure&& other) noexcept {
    if (this != &other) {
        vertices = std::move(other.vertices);
    }
    return *this;
}

Figure::~Figure() {}

void Figure::addVertex(const Top& v) {
    vertices.push_back(v);
}

void Figure::setVertex(int index, const Top& v) {
    if (index >= 0 && index < vertices.size()) {
        vertices[index] = v;
    }
}

Top Figure::getVertex(int index) const {
    if (index >= 0 && index < vertices.size()) {
        return vertices[index];
    }
    return Top();
}

int Figure::getVertexCount() const {
    return vertices.size();
}

void Figure::input() {
    for (int i = 0; i < vertices.size(); i++) {
        std::cout << "Vertex " << i + 1 << ": ";
        vertices[i].input();
    }
}

void Figure::output() const {
    for (int i = 0; i < vertices.size(); i++) {
        std::cout << "Vertex " << i + 1 << ": ";
        vertices[i].output();
    }
}
