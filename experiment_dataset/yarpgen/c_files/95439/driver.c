#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1648217922U;
short var_2 = (short)-17894;
unsigned long long int var_5 = 8307693990058979537ULL;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 11267438266445792366ULL;
short var_11 = (short)-15760;
signed char var_12 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
