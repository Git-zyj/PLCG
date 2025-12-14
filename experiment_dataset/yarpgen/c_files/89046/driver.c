#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)69;
signed char var_4 = (signed char)43;
_Bool var_6 = (_Bool)0;
int var_7 = -650300877;
short var_8 = (short)-17771;
unsigned int var_9 = 4260886798U;
unsigned int var_11 = 3210216785U;
int zero = 0;
int var_12 = 102874720;
int var_13 = -1171919468;
unsigned short var_14 = (unsigned short)54412;
unsigned long long int var_15 = 904451371843025782ULL;
short var_16 = (short)7326;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
