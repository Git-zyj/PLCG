#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3292125432U;
long long int var_4 = -339294122853628966LL;
int var_7 = -1846424882;
unsigned long long int var_8 = 7890025892409986269ULL;
unsigned char var_12 = (unsigned char)32;
short var_14 = (short)-29702;
int zero = 0;
unsigned long long int var_15 = 5596176786686293063ULL;
long long int var_16 = -7485281564750356570LL;
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
