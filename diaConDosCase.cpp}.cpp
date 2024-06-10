#include<iostream>
using namespace std;
int main()
{
	int dia = 0;
	cout<<"Ingresa el dia: ";
	cin>>dia;
	switch(dia){
		case 1 ... 5:
			cout<<"dia de trabajo :(";
			break;
		case 6 ... 7:
			cout<<"dia de descanso :)";
			break;
		default:
			cout<<"Dia invalido";
			break;
	}
	return 0;
}
