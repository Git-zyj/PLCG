#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 7206688934126659585ULL;
unsigned int var_2 = 1923483832U;
int var_5 = -2070456;
unsigned short var_8 = (unsigned short)60354;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 1964450652;
signed char var_14 = (signed char)-43;
int var_15 = -2066367504;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
