#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-120;
unsigned int var_5 = 285989790U;
unsigned short var_10 = (unsigned short)19059;
unsigned int var_14 = 1947053960U;
int zero = 0;
short var_15 = (short)747;
long long int var_16 = 4253706397396295626LL;
void init() {
}

void checksum() {
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
