#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3695234922677077917LL;
unsigned short var_6 = (unsigned short)35581;
long long int var_10 = -9173898569724526005LL;
unsigned short var_13 = (unsigned short)21029;
long long int var_16 = -4857112828692704268LL;
int zero = 0;
long long int var_19 = 6040838854160777216LL;
unsigned int var_20 = 1121641242U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
