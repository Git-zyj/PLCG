#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -755266506;
int var_2 = -1053317953;
unsigned char var_4 = (unsigned char)55;
short var_5 = (short)-22709;
_Bool var_7 = (_Bool)1;
int var_8 = -1540110157;
short var_9 = (short)-22841;
int zero = 0;
int var_10 = -1923909563;
int var_11 = 1019579423;
unsigned char var_12 = (unsigned char)198;
short var_13 = (short)9794;
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
