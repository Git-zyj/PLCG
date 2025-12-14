#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13504814567699760431ULL;
short var_3 = (short)-3143;
int var_16 = 682287250;
int zero = 0;
unsigned long long int var_18 = 15176338901734037135ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 5679018972173201434ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
