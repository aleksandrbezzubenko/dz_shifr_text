#include "header.hpp"
unsigned char ShiftLeft(unsigned char a)
{
    unsigned char bits = a >> 3; //R=11 (3 = |8-R|) 3 старших бита станут младшими
    a <<= 5; // Сдвиг влево на 5 бит (8-3=5)
    return a | bits;
}
unsigned char ShiftRight(unsigned char a)
{
    unsigned char bits = a << 3; //R=11 (3 = |8-R|) 3 младших бита станут старшими
    a >>= 5; // Сдвиг вправо на 5 бит (8-3=5)
    return a | bits;
}