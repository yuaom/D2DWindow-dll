#pragma once
#include "D2DApp.h"
#include "D2DCapture.h"
#include "D2DWindowControl.h"
#include "D2DColor.h"
#include "inet.h"
namespace V6 
{
	class TDBase : public D2DControls
	{
		public :
			TDBase();
			virtual void CreateControl(D2DControls* pacontrol, const FRectF& rc, DWORD stat, LPCWSTR name, int local_id = -1);
			virtual LRESULT WndProc(AppBase& b, UINT message, WPARAM wParam, LPARAM lParam) override;
			virtual void Draw(D2DContext& cxt) override;




	};

		class TDChart : public D2DControls
		{
			public :
				TDChart();
				virtual ~TDChart();
				virtual void CreateControl(D2DControls* pacontrol, const FRectF& rc, DWORD stat, LPCWSTR name, int local_id = -1);
				virtual LRESULT WndProc(AppBase& b, UINT message, WPARAM wParam, LPARAM lParam) override;
				virtual void Draw(D2DContext& cxt) override;
		};

		class TDChartButtons: public D2DControls
		{
			public :
				TDChartButtons();
				virtual void CreateControl( D2DControls* pacontrol, const FRectF& rc, DWORD stat, LPCWSTR name, int local_id , D2DColor clr);
				virtual LRESULT WndProc(AppBase& b, UINT message, WPARAM wParam, LPARAM lParam) override;
				virtual void Draw(D2DContext& cxt) override;
				void OnClick(int mode);
				

				D2DColor bkclr_;
				std::vector<FRectF> btnar_;
				int btn_mode_;
		};

		class TDList : public D2DControls
		{
			public :
				TDList();
				virtual void CreateControl(D2DControls* pacontrol, const FRectF& rc, DWORD stat, LPCWSTR name, int local_id = -1);
				virtual LRESULT WndProc(AppBase& b, UINT message, WPARAM wParam, LPARAM lParam) override;
				virtual void Draw(D2DContext& cxt) override;
		};







	void CreateStockChart(D2DControls* ctrl,  FSizeF size );







};