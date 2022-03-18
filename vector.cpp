#include <math.h>
#include "vector.h"

Vector3 operator-(const Point3 &head, const Point3 &tail)
{
	Vector3 result;
	result.v[0] = head.p[0] - tail.p[0];
	result.v[1] = head.p[1] - tail.p[1];
	result.v[2] = head.p[2] - tail.p[2];
	return result;
}

Vector3 operator-(const Point4 &head, const Point3 &tail)
{
	Vector3 result;
	result.v[0] = head.p[0] - tail.p[0];
	result.v[1] = head.p[1] - tail.p[1];
	result.v[2] = head.p[2] - tail.p[2];
	return result;
}

float Vector3::Length()
{
	float l = (float) sqrt(v[0]*v[0] + v[1]*v[1] + v[2]*v[2]);
	return l;
}

float Vector3::Normalize()
{
	float l = Length();
	v[0]/=l;
	v[1]/=l;
	v[2]/=l;
	return l;
}

Vector3 CrossProduct(const Vector3 &v1, const Vector3 &v2)
{
	Vector3 result;
	result.v[0] = v1.v[1]*v2.v[2] - v1.v[2]*v2.v[1];
	result.v[1] = v1.v[2]*v2.v[0] - v1.v[0]*v2.v[2];
	result.v[2] = v1.v[0]*v2.v[1] - v1.v[1]*v2.v[0];
	return result;
}

float DotProduct(const Vector3 &v1, const Vector3 &v2)
{
	float dot = v1.v[0]*v2.v[0] + v1.v[1]*v2.v[1] + v1.v[2]*v2.v[2];
	return dot;
}

Vector3 operator*(const Vector3 & v, float s)
{
	Vector3 result;
	result.v[0] = v.v[0] * s;
	result.v[1] = v.v[1] * s;
	result.v[2] = v.v[2] * s;
	return result;
}

Vector3 operator*(float s, const Vector3 & v)
{
	return v*s;
}

Point3 operator+(const Point3 & p, const Vector3 & v)
{
	Point3 result;
	result.p[0] = p.p[0] + v.v[0];
	result.p[1] = p.p[1] + v.v[1];
	result.p[2] = p.p[2] + v.v[2];
	return result;
}

Point3 operator+(const Vector3 & v, const Point3 & p)
{
	return p+v;
}

Point3 operator-(const Point3 & p, const Vector3 & v)
{
	Point3 result;
	result.p[0] = p.p[0] - v.v[0];
	result.p[1] = p.p[1] - v.v[1];
	result.p[2] = p.p[2] - v.v[2];
	return result;
}

Point3 AffineSum(const Point3 &start, const Point3 & end, float t)
{
	Point3 result;
	result.p[0] = start.p[0]*(1-t) + end.p[0]*t;
	result.p[1] = start.p[1]*(1-t) + end.p[1]*t;
	result.p[2] = start.p[2]*(1-t) + end.p[2]*t;
	return result;
}

float DistanceBetweenPoints(const Point3 & p1, const Point3 & p2)
{
	Vector3 v = p1-p2;
	float l = v.Length();
	return l;
}

Vector3 operator+(const Vector3 & v1, const Vector3 & v2)
{
	Vector3 result;
	result.v[0] = v1.v[0] + v2.v[0];
	result.v[1] = v1.v[1] + v2.v[1];
	result.v[2] = v1.v[2] + v2.v[2];
	return result;
}
