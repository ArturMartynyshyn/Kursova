#ifndef TOP_H
#define TOP_H

#include <iostream>

class Top {
private:
    double x, y;

public:
    Top();
    Top(double x, double y);
    Top(const Top& other);
    Top(Top&& other) noexcept;
    Top& operator=(const Top& other);
    Top& operator=(Top&& other) noexcept;
    Top operator+(const Top& other) const;
    Top operator-(const Top& other) const;
    Top operator*(double scalar) const;
    Top operator/(double scalar) const;
    ~Top();

    friend std::ostream& operator<<(std::ostream& os, const Top& top);
    friend std::istream& operator>>(std::istream& is, Top& top);

    void setX(double x);
    void setY(double y);
    double getX() const;
    double getY() const;

    void input();
    void output() const;
};

#endif 
