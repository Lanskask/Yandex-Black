#include <iostream>
#include <vector>

using namespace std;

struct Point {
    int x,y;
    Point(int x, int y) : x(x), y(y) {}
};

void DuplicateAlongX(vector<Point>& v, int offset) {
    v.reserve(v.size() * 2);
    for(const auto& p : v) {
        v.emplace_back(p.x + offset, p.y);
    }
}

void DuplicateAlongY(vector<Point>& v, int offset) {
    v.reserve(v.size() * 2);
    for(const auto& p : v) {
        v.emplace_back(p.x, p.y + offset);
    }
}

int main() {
    std::vector<Point> points = {Point(0,0)};

    DuplicateAlongX(points, 1);
    DuplicateAlongX(points, 2);
    DuplicateAlongX(points, 4);

    DuplicateAlongY(points, 1);
    DuplicateAlongY(points, 2);
    DuplicateAlongY(points, 4);

    for(const auto& p : points)
        cout << "(" << p.x << ", " << p.y << ") ";

    return EXIT_SUCCESS;
}

// -D_LIBCPP_DEBUG=1