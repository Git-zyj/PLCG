#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18335;
unsigned long long int var_4 = 1591381779637781851ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
int var_7 = -882291027;
unsigned int var_8 = 1155533108U;
int var_9 = -266899973;
int zero = 0;
unsigned short var_10 = (unsigned short)48025;
unsigned long long int var_11 = 11070358862997872882ULL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
