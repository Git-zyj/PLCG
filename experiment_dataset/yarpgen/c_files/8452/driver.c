#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -553939840;
_Bool var_6 = (_Bool)1;
int var_7 = 1416611009;
unsigned int var_11 = 1113692129U;
unsigned long long int var_12 = 2608131977981368483ULL;
_Bool var_13 = (_Bool)1;
unsigned short var_17 = (unsigned short)21222;
int zero = 0;
signed char var_18 = (signed char)56;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-125;
unsigned long long int var_21 = 16647575726743017547ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
