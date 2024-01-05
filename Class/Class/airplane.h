#pragma once
#include "transportation.h"

class Airplane : public Transportation
{
private:
	string wing_type;
	string engine_type;

public:
	void set_wing_type(string wing_type)
	{
		this->wing_type = wing_type;
	}

	void set_engine_type(string engine_type)
	{
		this->engine_type = engine_type;
	}

	string get_wing_type()
	{
		return wing_type;
	}

	string get_engine_type()
	{
		return engine_type;
	}

	void display_info()
	{
		Transportation::display_info();
		cout << "날개 종류 : " << wing_type << endl;
		cout << "엔진 타입 : " << engine_type << endl;
	}
};