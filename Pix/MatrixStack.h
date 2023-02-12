#pragma once
#include <vector>;
#include "Matrix4.h"

class MatrixStack
{
public:
	static MatrixStack* Get();
	void OnNewFrame();
	void PushTranslation(const Vector3 d);
	void PushRotationX(const float rad);
	void PushRotationY(const float rad);
	void PushRotationZ(const float rad);
	void PushScaling(const Vector3 s);
	void PopMatrix();

	Matrix4 GetTransform() const { return mCombinedTransfrom; }

private:
	std::vector<Matrix4> mMatrices;
	Matrix4 mCombinedTransfrom;
};
