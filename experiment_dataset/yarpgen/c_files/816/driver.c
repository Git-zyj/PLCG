#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13419009449783752171ULL;
unsigned char var_3 = (unsigned char)124;
unsigned int var_5 = 2822740816U;
unsigned long long int var_7 = 1800580992643178539ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 4135542710989567213ULL;
int zero = 0;
unsigned long long int var_12 = 9637966943518050210ULL;
unsigned short var_13 = (unsigned short)64179;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)100;
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
