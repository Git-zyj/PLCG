#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18300;
int var_2 = -1264175751;
short var_5 = (short)-13730;
unsigned long long int var_6 = 621683911964839947ULL;
unsigned int var_7 = 2947521942U;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)245;
long long int var_11 = 9040739922386719722LL;
long long int var_12 = 7354204314473727298LL;
long long int var_13 = 1885101823473768587LL;
int zero = 0;
short var_14 = (short)-8599;
long long int var_15 = -2717026948595001739LL;
signed char var_16 = (signed char)-111;
unsigned int var_17 = 290576820U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
