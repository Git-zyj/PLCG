#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-2;
unsigned short var_2 = (unsigned short)62019;
signed char var_3 = (signed char)11;
long long int var_4 = -4799427445650567929LL;
unsigned long long int var_6 = 13596372583747129990ULL;
long long int var_7 = 4785139874978022874LL;
unsigned short var_11 = (unsigned short)39462;
signed char var_17 = (signed char)-63;
int zero = 0;
int var_20 = 1711384216;
short var_21 = (short)-15347;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
