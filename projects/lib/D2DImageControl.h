#pragma once
#include "D2DApp.h"
#include "D2DWindowControl.h"
#include "D2DMisc.h"
namespace V6
{
	class D2DImageControl: public D2DControl
	{
		public :
			D2DImageControl(){};
			virtual void CreateControl(D2DWindow* parent, D2DControls* pacontrol, const FRectF& rc, DWORD stat, LPCWSTR name, int local_id = -1);

			void SetImage(ComPTR<ID2D1Bitmap> img ){ img_ = img; }
		public:
			// D2DCaptureObject interface
			virtual HRESULT WndProc(AppBase& b, UINT message, WPARAM wParam, LPARAM lParam) override;
			virtual int GetTypeid() const override{ return TYP_IMAGE; }
		public:
			// D2DControl
			virtual const FRectF& GetRect() const override { return rc_; }
			virtual void SetRect(const FRectF& rc)  override { rc_ = rc; }
			virtual void Draw(D2DContext& cxt)  override;

		protected :
			FRectF rc_;
			//int part_stat_;
			//std::wstring text_;

			ComPTR<ID2D1Bitmap> img_;
			//FPointF ptText_;
		

	};
}

