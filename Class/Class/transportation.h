#pragma once
#include <iostream>
using namespace std;

class Transportation
{
protected:
	string name;
	string manufacturer;
	float fuel_efficiency;
	int max_passenger;

public: 
	void set_name(string name)
	{
		this->name = name;
	}

	void set_manufacturer(string manufacturer)
	{
		this->manufacturer = manufacturer;
	}

	void set_fuel_efficiency(float fuel_efficiency)
	{
		this->fuel_efficiency = fuel_efficiency;
	}

	void set_max_passenger(int max_passenger)
	{
		this->max_passenger = max_passenger;
	}

	string get_name()
	{
		return name;
	}

	string get_manufacturer()
	{
		return manufacturer;
	}

	float get_fuel_efficiency()
	{
		return fuel_efficiency;
	}

	int get_max_passenger()
	{
		return max_passenger;
	}

	virtual void display_info()
	{
		cout << "이름 : " << name << endl;
		cout << "제조사 : " << manufacturer << endl;
		cout << "연비 : " << fuel_efficiency << endl;
		cout << "최대 탑승 인원 : " << max_passenger << endl;
	}
};