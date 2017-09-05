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
	void setDia(int dia);
	
	int getMes();
	void setMes(int mes);
	
	int getAno();
	void setAno(int ano);
	
};

#endif // DATA_H
