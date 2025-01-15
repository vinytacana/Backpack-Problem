#include <iostream>
#include "binary.h"
#include "binario.cpp"
using namespace std;

unsigned short onePoint(unsigned short a, unsigned short b)
{
    /* 1ºpt: gera uma nova solucao a partir
    de duas solucoes existentes, copiando parte dos bits da primeira
    solucao e o restante da segunda solucao*/

    /*2ºpt: recebe dois valores inteiros
    representando as solucoes e
    retorna um valor inteiro representando o cruzamento
    aritmetico entre as solucoes*/
    unsigned short estado1, estado2;
    unsigned short novo;
    estado1 = highBits(a);
    estado2 = lowBits(b);
    novo = (estado1 << 8)|estado2;
    return novo;
}

unsigned short Aritmetic(unsigned short a, unsigned short b)
{
    /*1ºpt:o cruzamento tipo aritmético gera uma nova solução a partir de
    duas existentes, usando o bit 1 nas posições em que
    ambas soluções iniciais sejam 1e 0, caso contrário.
    */
    /* 1ºpt: recebe dois valores inteiros representando as soluções e
     retorna um valor inteiro representando o cruzamento
     aritmético entre as soluções;
    */
    unsigned result;
    result = binaryAnd(a, b);
    return result;
}
unsigned short Simple(unsigned short a){
    /*Simples: a mutação simples modifica um bit de uma solução existente, obtendo 
assim uma nova solução. */
    unsigned short result;
    result = ligarBit(a, 9);
    return result;
}

unsigned short Pair(unsigned short a){
    /*Dupla: a mutação dupla tem o mesmo comportamento da simples, mas a nova 
    solução tem dois bits modificados, no lugar de apenas um. */
/*  Instrucao: Mutação Dupla: recebe um valor inteiro representando uma
    solução e retorna um valor 
    inteiro representando a mutação dupla da solução. */
    unsigned short estado;
    estado = ligarBit(a, 3);
    estado = ligarBit(estado, 12);
    return estado;
}
int main(void)
{
    
    unsigned short result;
    result = onePoint(60504, 25000);
    // saida esperada: 60.584
    //result = Aritmetic(12329, 38054);
    //result = Simple(1259 );
    //result= Pair(732);
    cout << result << endl;
    return 0;
}