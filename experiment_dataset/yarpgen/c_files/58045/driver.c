#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -684523751;
unsigned long long int var_9 = 4148225155380662019ULL;
signed char var_13 = (signed char)99;
unsigned short var_15 = (unsigned short)41873;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)14750;
unsigned long long int var_19 = 15919547599187939145ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
