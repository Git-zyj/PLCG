#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3959846543463852487LL;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)107;
int var_12 = -390050563;
int var_15 = -2109758817;
unsigned long long int var_16 = 16421109507998369518ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)8850;
unsigned char var_22 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
