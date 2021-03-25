#include "Vector3d.h"

ostream& operator <<(ostream& out, const Vector3d& c)
{
	return out << string(c);
}

istream& operator >>(istream& in, Vector3d& g)
{
	int a, b, c;
	cout << endl;
	cout << "vector = ? " << endl << endl;
	cout << "x =  "; in >> a;
	cout << "y =  "; in >> b;
	cout << "z =  "; in >> c;
	g.setX(a); g.setY(b); g.setZ(c);

	return in;
}

Vector3d operator +(const Vector3d& o, const Vector3d& u)
{
	Vector3d s;
	int a = o.getX() + u.getX();
	int b = o.getY() + u.getY();
	int c = o.getZ() + u.getZ();

	s.setX(a);
	s.setY(b);
	s.setZ(c);

	return s;
}

int operator * (const Vector3d o, const Vector3d u)
{

	int a = o.getX() * u.getX();
	int b = o.getY() * u.getY();
	int c = o.getZ() * u.getZ();

	int s = a + b + c;

	return s;
}

Vector3d::operator string() const
{
	ostringstream ss;
	ss << "(" << getX() << "," << getY() << "," << getZ() << ")";
	return ss.str();
}