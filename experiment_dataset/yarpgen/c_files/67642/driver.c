#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)18459;
long long int var_7 = -1922391827888585243LL;
int var_10 = -1565128154;
long long int var_11 = -3650837766850265793LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-115;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
