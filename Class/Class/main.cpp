#include "car.h"
#include "airplane.h"

int main(void)
{
	Car casper;
	casper.set_name("ĳ����");
	casper.set_manufacturer("�����ڵ���");
	casper.set_fuel_efficiency(15.4f);
	casper.set_max_passenger(4);
	casper.set_airbag_type("��庥���� �����");
	casper.set_transmission_type("���� ���");

	cout << "------ ���� ���� -------" << endl;
	casper.display_info();

	cout << endl;

	Airplane B747;
	B747.set_name("747-8i");
	B747.set_manufacturer("����");
	B747.set_fuel_efficiency(4.4f);
	B747.set_max_passenger(350);
	B747.set_engine_type("4�߱�");
	B747.set_wing_type("������");

	cout << "------ ����� ���� -------" << endl;
	B747.display_info();


	return 0;
}