//
//
//int TestTriangleAABB(Point v0, Point v1, Point v2, AABB b)
//{
//	float p0, p1, p2, r;
//	// compute box center and extents (if not already given in that format)
//	Vector c = (b.min + b.max) * 0.5f;
//	float e0 = (b.max.x - b.min.x) * 0.5f;
//	float e1 = (b.max.y - b.min.y) * 0.5f;
//	float e2 = (b.max.z - b.min.z) * 0.5f;
//	// Translate triangle as conceptually moving AABB to origin
//	v0 = v0 - c;
//	v1 = v1 - c;
//	v2 = v2 - c;
//	// Compute edge vectors for triangle
//	Vector f0 = v1 - v0, f1 = v2 - v1, f2 = v0 - v2;
//	// Test axes a00..a22 (category 3)
//	// Test axis a00
//	p0 = v0.z * v1.y - v0.y * v1.z;
//	p2 = v2.z * (v1.y - v0.y) - v2.y * (v1.z - v0.z);
//	r = e1 * Abs(f0.z) + e2 * Abs(f0.y);
//	if (Max(-Max(p0, p2), Min(p0, p2)) > r)
//		return 0; // axis is a separating axis
//	// Repeat similar tests for remaining axes a01..a22
//	...
//		// Test the three axes corresponding to the face normals of AABB b (category 1).
//		// Exit if ...
//		// ... [-e0, e0] and [min(v0.x, v1.x, v2.x), max(v0.x, v1.x, v2.x)] do not overlap
//		if (Max(v0.x, v1.x, v2.x) < -e0 || Min(v0.x, v1.x, v2.x) > e0) return 0;
//	// ... [-e1, e1] and [min(v0.y, v1.y, v2.y), max(v0.y, v1.y, v2.y)] do not overlap
//	if (Max(v0.y, v1.y, v2.y) < -e1 || Min(v0.y, v1.y, v2.y) > e1) return 0;
//	// ... [-e2, e2] and [min(v0.z, v1.z, v2.z), max(v0.z, v1.z, v2.z)] do not overlap
//	if (Max(v0.z, v1.z, v2.z) < -e2 || Min(v0.z, v1.z, v2.z) > e2) return 0;
//	// Test separating axis corresponding to triangle face normal (category 2)
//	Plane p;
//	p.n = Cross(f0, f1);
//	p.d = Dot(p.n, v0);
//	return TestAABBPlane(b, p);
//}