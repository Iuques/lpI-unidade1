#include <iostream>
#include "complexo.h"

using namespace std;

int main() {
    char operador;

    // Entrada do operador
    cout << "Digite o operador (+, -, *, /, ^)[0 para sair]: ";
    cin >> operador;

    while (operador != '0') {
        if (operador != '+' && operador != '-' && operador != '*' && operador != '/' && operador != '^') {
            cout << "Operador inválido!";
            return 1;
        }

        Complexo resultado;

        if (operador == '^') {
            float real, imag;
            int expoente;

            // Entrada do número complexo
            cout << "Digite a parte real do número complexo: ";
            cin >> real;
            cout << "Digite a parte imaginária do número complexo: ";
            cin >> imag;
            cout << "Digite o expoente: ";
            cin >> expoente;

            Complexo num(real, imag);
            resultado = num.pow(expoente);

        } else {        
            float real1, imag1, real2, imag2;

            // Entrada do primeiro número complexo
            cout << "Digite a parte real do primeiro número complexo: ";
            cin >> real1;
            cout << "Digite a parte imaginária do primeiro número complexo: ";
            cin >> imag1;

            // Entrada do segundo número complexo
            cout << "Digite a parte real do segundo número complexo: ";
            cin >> real2;
            cout << "Digite a parte imaginária do segundo número complexo: ";
            cin >> imag2;

            // Criando objetos Complexo
            Complexo num1(real1, imag1);
            Complexo num2(real2, imag2);

            // Realizando a operação com base no operador
            switch (operador) {
                case '+':
                    resultado = num1 + num2;
                    break;
                case '-':
                    resultado = num1 - num2;
                    break;
                case '*':
                    resultado = num1 * num2;
                    break;
                case '/':
                    resultado = num1 / num2;
                    break;
            }
        }

        // Imprimindo o resultado
        cout << "Resultado: ";
        resultado.imprimir();
        cout << endl;

        cout << "Digite o operador (+, -, *, /, ^)[0 para sair]: ";
        cin >> operador;
    }

    return 0;
}
