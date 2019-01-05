#include "header.hpp"
unsigned char ShiftLeft(unsigned char a)
{
    unsigned char bits = a >> 3; //R=11 (3 = |8-R|) 3 ������� ���� ������ ��������
    a <<= 5; // ����� ����� �� 5 ��� (8-3=5)
    return a | bits;
}
unsigned char ShiftRight(unsigned char a)
{
    unsigned char bits = a << 3; //R=11 (3 = |8-R|) 3 ������� ���� ������ ��������
    a >>= 5; // ����� ������ �� 5 ��� (8-3=5)
    return a | bits;
}