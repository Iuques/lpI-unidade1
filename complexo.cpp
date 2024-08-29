#include "complexo.h"

// Inicia os valores como 0
Complexo::Complexo(){
	a = 0.;
	b = 0.;
}

// Imprime o número complexo
void Complexo::imprimir(){
	if (a != 0 && b != 0) {
		cout << a << " + " << b << "i";
		return;
	} else if (a == 0 && b != 0) {
		cout << b << "i";
	} else if (a != 0 && b == 0) {
		cout << a;
	} else {
		cout << "0";
	}
	
}

// Copia os valores de um complexo para o outro
Complexo::Complexo(Complexo const &i_){
	a = i_.a;
	b = i_.b;
}

// Inicializa os valores de acordo com os parâmetros
Complexo::Complexo(float a_, float b_){
	a = a_;
	b = b_;
}

// Método de Potência de um número imaginário elevado a um número inteiro "i_"
Complexo Complexo::pow(int i_){
	// A base será o próprio complexo
	Complexo base(a,b);
	// O resultado começa como o próprio complexo (X^1)
	Complexo result(base);

	// Multiplica o resultado pela base i_ vezes (expoente)
	for (int i = 1; i < i_; i++){
		result = result*base; 
	}
	
	return result;
}

// Soma a parte real e imaginária individualmente
Complexo Complexo::operator+(Complexo const &i_){
	float real = a + i_.a;
	float imaginary = b + i_.b; 

	return Complexo(real, imaginary);
}

// Subtrai a parte real e imaginária individualmente
Complexo Complexo::operator-(Complexo const &i_){
	float real = a - i_.a;
	float imaginary = b - i_.b; 

	return Complexo(real, imaginary);
}

Complexo Complexo::operator*(Complexo const &i_){
	// A parte real do novo complexo será o resultado da subtração do produto das partes reais dos complexos operantes pelo produto das partes imaginárias operantes.
	// Já que i * i = -1, a parte imaginária se tornará um real negativo, por isso a subtração.
	float real = a * i_.a - (b * i_.b);
	// A parte imaginária será a soma do produto da parte real de um complexo pela parte real de outro.
	float imaginary = (a * i_.b) + (b * i_.a);

	return Complexo(real, imaginary);
}

Complexo Complexo::operator/(Complexo const &i_){
	// O denominador será a soma das potências das partes real e imaginária do complexo sendo divisor (para transformar a parte imaginária em real).
	float denominator = (i_.a * i_.a) + (i_.b * i_.b);

	// O produto de um complexo pelo outro é depois dividido pelo denominador.
	float real = ((a * i_.a) + (b * i_.b))/denominator;
	float imaginary = ((b * i_.a) - (a * i_.b))/denominator;

	return Complexo(real, imaginary);
}

// Sobrecarga do operador '=', copia um complexo para o outro
Complexo& Complexo::operator=(Complexo const &i_){
	a = i_.a;
	b = i_.b;

	return *this;
}

// Sobrecarga do operador booleano '=='
bool Complexo::operator==(Complexo const &i_){
	if (a == i_.a && b == i_.b) {
		// Retorna true caso tanto a parte real quanto a imaginária seja igual nos dois casos
		return true;
	} else {
		return false;
	}
}

// Sobrecarga do operador booleano '!=', o oposto de '=='
bool Complexo::operator!=(Complexo const &i_){
	if (a == i_.a && b == i_.b) {
		return false;
	} else {
		return true;
	}
}
