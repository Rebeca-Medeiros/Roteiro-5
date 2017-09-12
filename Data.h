#ifndef DATA_H
#define DATA_H

class Data {
    private:
        int dia;
        int mes;
        int ano;
    public:
        Data(int dia, int mes, int ano);
        void avancarDia(int dia, int mes, int ano);

      	int getDia();
      	void setDia(int d);

      	int getMes();
      	void setMes(int m);

      	int getAno();
      	void setAno(int a);

};

#endif // DATA_H
