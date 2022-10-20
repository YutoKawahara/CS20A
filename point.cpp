#include"point.h"

Point::Point():m_x(0), m_y(0) {}

Point::Point(int x, int y): m_x(x), m_y(y) {}

int Point::readX() const {
	return m_x;
}

int Point::readY() const {
	return m_y;
}
Point Point::read() const {
	return Point(m_x, m_y);
}
void Point::write(int x, int y) {
	m_x = x;
	m_y = y;
}
bool Point::operator==(const Point& other) {
	return (m_x == other.m_x && m_y == other.m_y);
}
bool Point::operator==(const Point& other) const {
	return (m_x == other.m_x && m_y == other.m_y);
}

bool Point::operator!=(const Point& other) {
	return !operator==(other);
}

bool Point::operator!=(const Point& other) const {
	return !operator==(other);
}


std::ostream & operator<<(std::ostream &os, const Point& p) {
	return os << "(" << p.m_x <<","<<p.m_y<<")";
}

Point operator+ (const Point &lhs, const Point &rhs) {
	Point p(lhs.m_x + rhs.m_x, lhs.m_y + rhs.m_y);
	return p;
}
Point operator- (const Point &lhs, const Point &rhs) {
	Point p(lhs.m_x - rhs.m_x, lhs.m_y - rhs.m_y);
	return p;
}

double sqrDist(const Point &p1, const Point &p2) {

	double x0 = p1.readX();
	double x1 = p2.readX();
	double y0 = p1.readY();
	double y1 = p2.readY();
	double dist = (x0 - x1)*(x0 - x1) + (y0 - y1)*(y0 - y1);
	return dist;
}