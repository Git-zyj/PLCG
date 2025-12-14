#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)227;
long long int var_1 = -7766818035600330795LL;
signed char var_3 = (signed char)8;
long long int var_5 = 1348604115933573721LL;
unsigned int var_6 = 3784928436U;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-26832;
unsigned short var_9 = (unsigned short)24883;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 15221945112051096897ULL;
int zero = 0;
unsigned int var_13 = 752358245U;
short var_14 = (short)9847;
long long int var_15 = -2898049117266277080LL;
unsigned long long int var_16 = 2159327816490809794ULL;
void init() {
}

void checksum() {
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
