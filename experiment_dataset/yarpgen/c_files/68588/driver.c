#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30115;
unsigned int var_5 = 160357636U;
unsigned int var_6 = 1272499067U;
unsigned int var_7 = 1690932098U;
int zero = 0;
unsigned long long int var_10 = 1228396098996756048ULL;
unsigned int var_11 = 413853844U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
