#include <iostream>
#include "binary.h"
using namespace std;

unsigned short binaryAnd(unsigned short a, unsigned short b)
{
    unsigned short AND;

    AND = a & b;
    return AND;
}
unsigned short binaryOR(unsigned short a, unsigned short b)
{
    unsigned short OR;
    OR = a | b;
    return OR;
}

unsigned short ligarBit(unsigned short a, unsigned short pos)
{ // estado do a, e posicao que deseja mudar
    unsigned short estado, mask = 1 << pos;
    estado = a | mask;
    return estado;
}

unsigned short desligarBit(unsigned short a, unsigned short pos)
{
    unsigned short estado, mask = ~(1 << pos);
    estado = a & mask;
    return estado;
}

unsigned short lowBits(unsigned short a)
{
    unsigned char lowBit = a;
    return lowBit;
}
unsigned short highBits(unsigned short a)
{
    
    return (a>>8);
}

unsigned short bitTest(unsigned short a, unsigned short pos){
    unsigned short mask;
    mask = 1 << pos;
    if(a & mask){
        return 1;
    }else{
        return 0;
    }


}
