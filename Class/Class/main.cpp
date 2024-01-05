#include "car.h"
#include "airplane.h"

int main(void)
{
	Car casper;
	casper.set_name("캐스퍼");
	casper.set_manufacturer("현대자동차");
	casper.set_fuel_efficiency(15.4f);
	casper.set_max_passenger(4);
	casper.set_airbag_type("어드벤스드 에어백");
	casper.set_transmission_type("수동 기어");

	cout << "------ 차량 정보 -------" << endl;
	casper.display_info();

	cout << endl;

	Airplane B747;
	B747.set_name("747-8i");
	B747.set_manufacturer("보잉");
	B747.set_fuel_efficiency(4.4f);
	B747.set_max_passenger(350);
	B747.set_engine_type("4발기");
	B747.set_wing_type("고정익");

	cout << "------ 비행기 정보 -------" << endl;
	B747.display_info();


	return 0;
}