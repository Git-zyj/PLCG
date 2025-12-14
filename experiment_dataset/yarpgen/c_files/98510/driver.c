#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)32770;
long long int var_8 = 662477750163298707LL;
signed char var_13 = (signed char)55;
unsigned long long int var_14 = 7444886469646109637ULL;
unsigned int var_15 = 102411561U;
unsigned short var_16 = (unsigned short)7855;
unsigned short var_17 = (unsigned short)21194;
int zero = 0;
unsigned short var_19 = (unsigned short)38231;
unsigned short var_20 = (unsigned short)41959;
void init() {
}

void checksum() {
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
