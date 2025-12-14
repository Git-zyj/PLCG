#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1325449348;
unsigned int var_2 = 2826517018U;
unsigned long long int var_4 = 17256142647999006695ULL;
unsigned short var_5 = (unsigned short)37321;
signed char var_6 = (signed char)-38;
unsigned long long int var_13 = 3459973491470562222ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 11905175065044834485ULL;
short var_16 = (short)-9690;
unsigned int var_17 = 1657920878U;
void init() {
}

void checksum() {
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
