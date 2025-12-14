#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23016;
short var_6 = (short)-25522;
short var_11 = (short)9518;
signed char var_12 = (signed char)-30;
int zero = 0;
int var_13 = -1502787565;
unsigned short var_14 = (unsigned short)18429;
unsigned int var_15 = 1813788759U;
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
