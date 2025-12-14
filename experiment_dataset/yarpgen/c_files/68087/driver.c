#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5577950610234641422LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 7420518175161499443ULL;
short var_13 = (short)-29811;
short var_14 = (short)14116;
int zero = 0;
unsigned long long int var_18 = 10988634523316985432ULL;
long long int var_19 = -2621966689037141683LL;
short var_20 = (short)-17701;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
