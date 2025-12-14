#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9533129355491652994ULL;
short var_8 = (short)-973;
signed char var_11 = (signed char)-41;
signed char var_15 = (signed char)16;
int zero = 0;
signed char var_19 = (signed char)-10;
signed char var_20 = (signed char)3;
short var_21 = (short)-22412;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
