#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-14772;
unsigned long long int var_5 = 6217779828009324355ULL;
short var_6 = (short)-21118;
signed char var_9 = (signed char)-53;
int var_10 = -1973656827;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-38;
int zero = 0;
unsigned short var_13 = (unsigned short)13804;
signed char var_14 = (signed char)1;
int var_15 = -426131648;
void init() {
}

void checksum() {
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
