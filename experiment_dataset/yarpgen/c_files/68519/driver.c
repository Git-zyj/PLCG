#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 866399892U;
int var_2 = 604534389;
unsigned char var_4 = (unsigned char)200;
short var_5 = (short)32304;
unsigned long long int var_6 = 7736485284801587243ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)58750;
long long int var_11 = 5064777749077097452LL;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)12465;
unsigned int var_15 = 1267856453U;
int zero = 0;
unsigned short var_16 = (unsigned short)59894;
unsigned short var_17 = (unsigned short)15067;
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
