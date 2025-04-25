#pragma once
#include "Top.h"
#include <vector>

class Figure
{
protected:
	std::vector<Top> vertices;

public:
    Figure(int count = 0);
    Figure(const Figure& other);
    Figure(Figure&& other) noexcept;
    Figure& operator=(const Figure& other);
    Figure& operator=(Figure&& other) noexcept;
    virtual ~Figure();

    void addVertex(const Top& v);
    void setVertex(int index, const Top& v);
    Top getVertex(int index) const;
    int getVertexCount() const;

    virtual void input();
    virtual void output() const;

    virtual void move(double dx, double dy) = 0;
};

