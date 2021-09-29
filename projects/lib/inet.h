#pragma once
struct InternetInfo
{
	// input
	bool bGet;
	BSTR url;
	BSTR postdata;

	// output
	BSTR errormsg;
	long throwerror;
	long result;
	BSTR content_type;
	long content_len;

	IStream* pstream;
};

InternetInfo* CreateInternetInfo( );
void DeleteInternetInfo(InternetInfo* p);

DWORD WINAPI InetAsync( LPVOID pInternetInfo );