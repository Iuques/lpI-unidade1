#include <iostream>
#include <string>

using namespace std;

#ifndef _CLASS_COMPLEXO_
	#define _CLASS_COMPLEXO_

class Complexo {
	private:
		// Parte real
		float a;
		// Parte imaginária
		float b; 

	public:
		// Construtor padrão (inicializa 'a' e 'b' como 0)
		Complexo();
		// Destrutor padrão
		~Complexo();
		// Construtor cópia
		Complexo(Complexo const &i_);
		// Construtor com parâmetros
		Complexo(float a_, float b_);
		// Imprime o número complexo
		void imprimir();
		// Método de Potência de um número imaginário elevado a um número inteiro "i_"
		Complexo pow(int i_); 

		// Sobrecargas dos operadores básicos
		Complexo operator+(Complexo const &i_);
		Complexo operator-(Complexo const &i_);
		Complexo operator*(Complexo const &i_);
		Complexo operator/(Complexo const &i_);

		// Sobrecarga do operador para receber valores
		Complexo& operator=(Complexo const &i_);

		// Sobrecarga dos operadores lógicos
		bool operator==(Complexo const &i_);
		bool operator!=(Complexo const &i_);
};
#endif
