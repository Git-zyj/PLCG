#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-32;
int var_7 = -77901409;
short var_10 = (short)-10103;
short var_14 = (short)19191;
signed char var_16 = (signed char)111;
int var_17 = -1689684092;
int zero = 0;
int var_19 = 528333876;
short var_20 = (short)20022;
void init() {
}

void checksum() {
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
