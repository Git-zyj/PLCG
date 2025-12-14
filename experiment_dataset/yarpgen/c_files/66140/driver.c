#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)86;
int var_3 = -1787825099;
short var_4 = (short)-13190;
short var_6 = (short)-12022;
short var_8 = (short)23806;
long long int var_10 = 5465434150285424382LL;
int zero = 0;
signed char var_13 = (signed char)92;
short var_14 = (short)-24956;
short var_15 = (short)-14882;
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
