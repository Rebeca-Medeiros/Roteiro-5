#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    Data d1 = Data(31, 8, 2017);
    Data d2 = Data(d2.dia, d2.mes, d2.ano);

    cout << "Digite o dia: " << endl;
    cin >> d2.getDia;

    cout << "Digite o mes: " << endl;
    cin >> d2.getMes;

    cout << "Digite o ano: " << endl;
    cin >> d2.getAno;

    d1.avancarDia(31, 8, 2017);
    d2.avancarDia(d2.dia, d2.mes, d2.ano);

    return 0;

}
