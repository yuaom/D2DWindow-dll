#include "pch.h"
#include "D2DWhiteWindowControl.h"

using namespace V6;

#define  APP (D2DApp::GetInstance())


D2DWhiteWindowControls::D2DWhiteWindowControls()
{ 

}


void D2DWhiteWindowControls::CreateControl(D2DWindow* parent, D2DControls* pacontrol, const FRectF& rc, DWORD stat, LPCWSTR name, int local_id)
{ 
	D2DControls::CreateControl(parent, pacontrol,rc,stat,name,local_id);

	rc_ = rc;
}

HRESULT D2DWhiteWindowControls::WndProc(AppBase& b, UINT message, WPARAM wParam, LPARAM lParam)
{ 
	HRESULT r = 0;

	if ( message == WM_LBUTTONDOWN )
	{
		MouseParam* mp = (MouseParam*)lParam;

		auto pt = mat_.DPtoLP(mp->pt);
		if ( IsMilitarybase(1, rc_.ZeroRect(), pt ))
			mstat_ = STAT::MOVING;
	}


	r = MovableWithMouse::WndProc(b,message,wParam,lParam);

	
	if ( r == 0 && message == WM_MOUSEMOVE )
	{
		MouseParam* mp = (MouseParam*)lParam;
		auto me = dynamic_cast<D2DControl*>(this);
		
		FRectF rc(0,0, rc_.Width(), TitleBarHeight );
		FPointF pt = mat_.DPtoLP( mp->pt );
		
		if ( rc.PtInRect(pt ) )
			r = 1;

	}

	if ( r == 0 )
		r = D2DControls::WndProc(b,message,wParam,lParam);
	return r;
}

void D2DWhiteWindowControls::Draw(D2DContext& cxt)
{ 	
	D2DMatrix mat(*cxt);
	mat.PushTransform();
	mat_ = mat.Offset(rc_);


	FRectF rc = rc_.ZeroRect();

	ComPTR<ID2D1SolidColorBrush> br,btTitle;
	(*cxt)->CreateSolidColorBrush( D2RGB(230,239,245), &br );
	(*cxt)->DrawRectangle(rc, cxt.black_);
	(*cxt)->FillRectangle(rc, br);

	rc.SetHeight(MovableWithMouse::TitleBarHeight);
	(*cxt)->CreateSolidColorBrush(D2RGBA(211, 239, 245, 255), &btTitle);
	(*cxt)->FillRectangle(rc, btTitle);

	InnerDraw(cxt);

	mat.PopTransform();
}

HRESULT MovableWithMouse::WndProc( AppBase& b, UINT message, WPARAM wParam, LPARAM lParam)
{
	HRESULT r = 0;

	if ( mstat_ == STAT::MOVING )
	{
		switch( message )
		{
			case WM_LBUTTONDOWN :
			{
				auto me = dynamic_cast<D2DCaptureObject*>(this);// 多重継承しているはず

				_ASSERT(me); 

				APP.SetCapture(me);
				r = 1;


			}
			break;
			case WM_MOUSEMOVE:
			{
				MouseParam* mp = (MouseParam*)lParam;
				auto me = dynamic_cast<D2DControl*>(this);// 多重継承しているはず
				_ASSERT(me);

				if ( APP.GetCapture() == me )
				{
					auto mat = me->Matrix();

					auto pt = mat.DPtoLP(mp->pt);
					auto ptprv = mat.DPtoLP(mp->ptprv);

					{
						auto xx = pt.x - ptprv.x;
						auto yy = pt.y - ptprv.y;
					
						auto rc = me->GetRect();
						rc.Offset(xx, yy );
						me->SetRect(rc);

						b.bRedraw = true;
						r = 1;
					}
				}
				
			}
			break;
			case WM_LBUTTONUP :
			{
				if ( APP.GetCapture() == dynamic_cast<D2DCaptureObject*>(this) )
				{
					APP.ReleaseCapture();

					r = 1;
					mstat_ = STAT::NORMAL;
				}
			}
			break;
		}	
	}
	


	return r;
}

