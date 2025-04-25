#pragma once
#include "Figure.h"
class Rectangle :
    public Figure
{
public:
	Rectangle(int count = 0);
	Rectangle(const Rectangle& other);
	Rectangle(Rectangle&& other) noexcept;
	Rectangle& operator=(const Rectangle& other);
	Rectangle& operator=(Rectangle&& other) noexcept;
	~Rectangle();
	void input() override;
	void output() const override;
	void move(double dx, double dy) override;

};

