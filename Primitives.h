#pragma once

enum class FileFormats
{
	FF1, FF2, undef
};
struct Point {
	int x = 0;
	int y = 0;
};

class GraphicalPrimitive {
public:
	virtual void save() = 0;
	virtual void load() = 0;
	virtual  ~GraphicalPrimitive() {}
};

class LineSegment :GraphicalPrimitive {
	LineSegment(Point a, Point b) {}
	Point a, b;
};
class Triangle :GraphicalPrimitive {
	Triangle(Point a, Point b, Point c);
	Point a, b, c;
};
class Rectangle : GraphicalPrimitive {
	Rectangle(Point a, Point b) {}
	Point a, b;
};

