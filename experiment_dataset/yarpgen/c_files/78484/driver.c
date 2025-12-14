#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)164;
_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 3124144804638149049ULL;
unsigned short var_10 = (unsigned short)36268;
unsigned int var_15 = 3719026376U;
int var_17 = 1185530526;
int zero = 0;
unsigned short var_20 = (unsigned short)50076;
signed char var_21 = (signed char)100;
unsigned int var_22 = 3579643871U;
unsigned char var_23 = (unsigned char)93;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
