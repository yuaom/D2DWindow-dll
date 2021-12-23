#pragma once
#include "D2DApp.h"
#include "D2DCapture.h"
#include "D2DWindowControl.h"
namespace V6 {


class BOne
{
	public :
		BOne():nn_(0),text_(nullptr),bOpen_(false){};
		BOne(LPCWSTR txt):nn_(0),bOpen_(false){ text_ = ::SysAllocString(txt);}
		virtual void Draw(D2DContext& cxt, D2DMatrix& mat);

	protected :
		BSTR text_;
		WORD nn_;
		D2DMat mat_;
		bool bOpen_;
};
class BOnes : public BOne
{
	public :
		BOnes(){}
		BOnes(LPCWSTR txt):BOne(txt)
		{
			bOpen_ = false;
		}
		virtual void Draw(D2DContext& cxt, D2DMatrix& mat) override;
	
		std::vector<std::shared_ptr<BOne>> ar_;
	protected:
		

};




class D2DFileManage : public D2DControls
{
public :
	D2DFileManage(){};	

	virtual void Draw(D2DContext& cxt) override;
	virtual LRESULT WndProc(AppBase& b, UINT message, WPARAM wParam, LPARAM lParam) override;
	virtual void CreateControl(D2DWindow* parent, D2DControls* pacontrol, const FRectF& rc, DWORD stat, LPCWSTR name, int local_id = -1) override;
	virtual std::wstring GetTreeTyp(USHORT* typ) override;
	
	void make_root();
protected :
	BOnes root_;
	
};

};

