#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18100;
unsigned int var_3 = 2994438380U;
long long int var_6 = -6270910663504812024LL;
unsigned short var_10 = (unsigned short)23056;
long long int var_12 = 1566124618860508764LL;
unsigned long long int var_14 = 18254200216709519427ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1255766244U;
unsigned int var_19 = 449739419U;
int zero = 0;
signed char var_20 = (signed char)43;
int var_21 = 817184851;
unsigned long long int var_22 = 11865269979717114924ULL;
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
