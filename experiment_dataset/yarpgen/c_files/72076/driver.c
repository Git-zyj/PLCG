#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
short var_2 = (short)-2573;
int var_11 = -1400426482;
unsigned long long int var_12 = 7891412388164434334ULL;
unsigned int var_14 = 3915765070U;
int zero = 0;
unsigned long long int var_15 = 12202278968750151856ULL;
int var_16 = -334131264;
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
