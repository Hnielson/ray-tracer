// Vector.h
// By Barton Stander
// April 2001
// For CS 3600 Graphics Programming

class Point3
{
public:
	float p[3];
};

class Point4
{
public:
	float p[4];
};

class Vector3
{
public:
	float v[3];
	float Length(); // return vectors length
	float Normalize(); // normalize vector and return length;
};

Vector3 operator-(const Point3 &head, const Point3 &tail);
Vector3 operator-(const Point4 &head, const Point3 &tail);
Vector3 operator*(const Vector3 & v, float s);
Vector3 operator*(float s, const Vector3 & v);
Point3 operator+(const Point3 & p, const Vector3 & v);
Point3 operator+(const Vector3 & v, const Point3 & p);
Point3 operator-(const Point3 & p, const Vector3 & v);
Vector3 CrossProduct(const Vector3 &v1, const Vector3 &v2);
float DotProduct(const Vector3 &v1, const Vector3 &v2);
Point3 AffineSum(const Point3 &start, const Point3 & end, float t);
float DistanceBetweenPoints(const Point3 & p1, const Point3 & p2);
Vector3 operator+(const Vector3 & v1, const Vector3 & v2);

