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
		cout << "���� ���� : " << wing_type << endl;
		cout << "���� Ÿ�� : " << engine_type << endl;
	}
};