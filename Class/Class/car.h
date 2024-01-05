#pragma once
#include "transportation.h"

class Car : public Transportation
{
private:
	string airbag_type;
	string transmission_type;

public:
	void set_airbag_type(string airbag_type)
	{
		this->airbag_type = airbag_type;
	}

	void set_transmission_type(string transmission_type)
	{
		this->transmission_type = transmission_type;
	}

	string get_airbag_type()
	{
		return airbag_type;
	}

	string get_transmission_type()
	{
		return transmission_type;
	}

	void display_info()
	{
		Transportation::display_info();
		cout << "에어백 종류 : " << airbag_type << endl;
		cout << "기어 종류 : " << transmission_type << endl;
	}
};