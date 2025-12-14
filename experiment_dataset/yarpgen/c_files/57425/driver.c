#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23019;
int var_2 = -795894087;
int var_4 = -1806380157;
short var_5 = (short)-3607;
unsigned char var_7 = (unsigned char)95;
_Bool var_10 = (_Bool)0;
unsigned char var_15 = (unsigned char)102;
int var_16 = 391392502;
long long int var_17 = -3311289655920817524LL;
unsigned short var_18 = (unsigned short)62926;
short var_19 = (short)-5972;
int zero = 0;
short var_20 = (short)-27184;
long long int var_21 = -7545451128519066197LL;
unsigned char var_22 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
