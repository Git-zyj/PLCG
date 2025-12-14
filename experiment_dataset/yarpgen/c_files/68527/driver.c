#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1054575920794078969LL;
short var_3 = (short)21032;
long long int var_8 = 6035860347599987243LL;
unsigned int var_10 = 1396023285U;
int zero = 0;
int var_11 = -1194240761;
unsigned int var_12 = 679456014U;
unsigned char var_13 = (unsigned char)99;
int var_14 = -989342679;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
