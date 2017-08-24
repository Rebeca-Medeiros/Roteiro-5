#ifndef DATA_H
#define DATA_H

class Data {
    public:
        int dia;
        int mes;
        int ano;

        Data(int dia, int mes, int ano);
        void avancarDia();
};

#endif // DATA_H
