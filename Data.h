#ifndef DATA_H
#define DATA_H

class Data {
    public:
        int dia;
        int mes;
        int ano;

        Data(int dia, int mes, int ano);
        void avancarDia(int dia, int mes, int ano);
};

#endif // DATA_H
