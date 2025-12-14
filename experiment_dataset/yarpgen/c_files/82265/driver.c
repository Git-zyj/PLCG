#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-81;
unsigned short var_10 = (unsigned short)36104;
long long int var_11 = -386717701034376238LL;
unsigned char var_13 = (unsigned char)134;
signed char var_14 = (signed char)-16;
int zero = 0;
unsigned long long int var_15 = 9174033037434702704ULL;
signed char var_16 = (signed char)38;
unsigned int var_17 = 3239585145U;
short var_18 = (short)-1024;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
