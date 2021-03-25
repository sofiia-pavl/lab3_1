#pragma once
#include "Triad.h"

class Vector3d :
    public Triad
{
public:
	Vector3d()
		:Triad()
	{}
	Vector3d(const Triad v)
		:Triad(v)
	{}
	Vector3d(const Vector3d& v)
	{
		int a = v.getX();
		int b = v.getY();
		int c = v.getZ();
		setX(a);
		setY(b);
		setZ(c);
	}

	friend ostream& operator <<(ostream& out, const Vector3d& c);
	friend istream& operator >>(istream& in, Vector3d& c);

	operator string () const;

	friend Vector3d operator + (const Vector3d&, const Vector3d&);
	friend int operator * (const Vector3d, const Vector3d);
};

