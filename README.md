# Calculadora de Números Complexos - Unidade 1 de LPI

## Descrição

Este projeto faz parte da disciplina de **Linguagem de Programação I (LPI)**. O objetivo é implementar uma calculadora para realizar operações matemáticas com números complexos. As operações disponíveis são:

- Soma
- Subtração
- Multiplicação
- Divisão
- Potenciação

O programa foi desenvolvido em C++ e permite que o usuário insira dois números complexos e escolha a operação desejada, ou realize a exponenciação de um número complexo.

## Como Usar

1. Ao executar o programa, será solicitado que você insira operador desejado, inserir `0` encerrará o programa.
2. Se escolher a operação de potenciação (`^`), o programa solicitará um complexo e o valor do expoente.
3. Se escolher qualquer outra operação, será solicitado dois complexos.
4. O resultado da operação será exibido na tela.

### Exemplo de Uso
```sh
Digite o operador (+, -, *, /, ^): +
Digite a parte real do primeiro número complexo: 3
Digite a parte imaginária do primeiro número complexo: 2
Digite a parte real do segundo número complexo: 1
Digite a parte imaginária do segundo número complexo: 4
Resultado: 4 + 6i
```

## Compilação
Para compilar o programa, utilize o comando `make`. O arquivo `Makefile` está configurado para sistemas linux, talvez seja necessário muda-lo. O comando abaixo irá compilar o projeto:
```bash
make
```
Isso irá gerar o executável para rodar o programa, use o comando abaixo para executá-lo.
```bash
./Main
```
