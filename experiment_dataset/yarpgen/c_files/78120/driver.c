#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_5 = -1847969887;
unsigned short var_10 = (unsigned short)33939;
short var_11 = (short)-13004;
int zero = 0;
unsigned short var_12 = (unsigned short)23635;
int var_13 = 1241464586;
unsigned long long int var_14 = 10711321475731321441ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
