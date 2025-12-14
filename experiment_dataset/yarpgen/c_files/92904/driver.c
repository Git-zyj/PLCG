#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = -1207024214;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)218;
unsigned long long int var_9 = 18104110984373827807ULL;
unsigned short var_10 = (unsigned short)27654;
unsigned short var_11 = (unsigned short)30080;
unsigned long long int var_14 = 7418351771322558431ULL;
int zero = 0;
unsigned long long int var_15 = 12602341260073226129ULL;
unsigned char var_16 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
