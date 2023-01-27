#pragma once

#include <XEngine.h>
#include "Vertex.h"
enum class FillMode {
	Solid,
	WireFrame
};
class Rasterizer
{
public:
	static Rasterizer* Get();

public:
	void SetColor(X::Color color);
	void SetFillMode(FillMode fillmode);
	void DrawPoint(int x, int y);
	void DrawPoint(const Vertex& vertex);
	void DrawLine(const Vertex& a, const Vertex& b);
	void DrawTriangle(const Vertex& a, const Vertex& b, const Vertex& c);
	void DrawFilledTriangle(const Vertex& v0, const Vertex& v1, const Vertex& v2);
private:
	X::Color mColor = X::Colors::White;
	FillMode mFillMode = FillMode::Solid;
};