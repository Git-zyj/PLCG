#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = 4860628052028063874LL;
unsigned long long int var_4 = 10602057309667945452ULL;
unsigned long long int var_5 = 13781818291331879560ULL;
unsigned char var_6 = (unsigned char)23;
unsigned int var_7 = 3214478870U;
unsigned long long int var_10 = 15147711541723588717ULL;
int zero = 0;
short var_11 = (short)-9434;
_Bool var_12 = (_Bool)1;
long long int var_13 = 2080102855274611058LL;
unsigned long long int var_14 = 17528357775329897483ULL;
int var_15 = -691827806;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
