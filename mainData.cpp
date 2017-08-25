#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    Data d1 = Data(31, 8, 2017);
    Data d2 = Data(d2.dia, d2.mes, d2.ano);

    cout << "Digite o dia: " << endl;
    cin >> d2.dia;

    cout << "Digite o mes: " << endl;
    cin >> d2.mes;

    cout << "Digite o ano: " << endl;
    cin >> d2.ano;

    d1.avancarDia(31, 8, 2017);
    d2.avancarDia(d2.dia, d2.mes, d2.ano);

    return 0;

}
