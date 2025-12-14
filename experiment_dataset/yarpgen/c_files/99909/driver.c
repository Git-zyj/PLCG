#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)102;
unsigned char var_6 = (unsigned char)176;
unsigned char var_7 = (unsigned char)247;
unsigned char var_10 = (unsigned char)87;
int zero = 0;
unsigned char var_12 = (unsigned char)135;
unsigned long long int var_13 = 15522944643787197911ULL;
unsigned char var_14 = (unsigned char)185;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
