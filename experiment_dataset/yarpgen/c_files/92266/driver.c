#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8142;
unsigned char var_7 = (unsigned char)160;
short var_12 = (short)-1332;
unsigned char var_13 = (unsigned char)116;
int zero = 0;
short var_19 = (short)12872;
unsigned short var_20 = (unsigned short)45319;
long long int var_21 = -4979457598950848645LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
