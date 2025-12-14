#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1757661840;
unsigned short var_4 = (unsigned short)3708;
unsigned char var_6 = (unsigned char)134;
unsigned short var_11 = (unsigned short)12472;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-579;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
