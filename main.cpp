#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    Data d1 = Data(24, 8, 2017);
    /*Data d2;

    cout << "Digite o dia: " << endl;
    cin >> d2.dia;

    cout << "Digite o mes: " << endl;
    cin >> d2.mes;

    cout << "Digite o ano: " << endl;
    cin >> d2.ano;*/


    d1.avancarDia();
    //d2.avancarDia();

    return 0;

}
