#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-21906;
unsigned int var_7 = 3373457156U;
unsigned int var_15 = 3937336383U;
short var_16 = (short)-29906;
unsigned long long int var_18 = 1362166830168865999ULL;
int zero = 0;
int var_19 = -1012480775;
unsigned short var_20 = (unsigned short)51621;
unsigned long long int var_21 = 7089514869165030021ULL;
unsigned long long int var_22 = 4240333972405589998ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
