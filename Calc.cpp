#include <iostream>
using namespace std;
int main()
{
	int  opc;
	do
	{
		cout<<"\t\t\t1. Sumar"<<endl;
		cout<<"\t\t\t2. Restar"<<endl;
		cout<<"\t\t\t3. Multiplicar"<<endl;
		cout<<"\t\t\t4. Dividir"<<endl;
		cout<<"\t\t\t5. Salir"<<endl;
		cout<<"\n\t\t\tIngrese su operacion: ";cin>>opc;
		cout<<"111111";
		switch (opc)
		{
			case 1: 
				system ("cls");
				cout<<"\t\t\tMultiplicacion\n";
			case 2:
			case 3:
			case 4:
				break;
		}
	} while (opc > 0 && opc < 5);
	
	return 0;
}
