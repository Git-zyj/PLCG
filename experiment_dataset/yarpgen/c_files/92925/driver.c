#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)285;
unsigned int var_7 = 3573124771U;
unsigned char var_13 = (unsigned char)136;
int var_14 = -1462258443;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2864319432U;
unsigned long long int var_17 = 16195481745238128461ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
