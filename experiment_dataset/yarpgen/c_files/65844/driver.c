#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28615;
unsigned short var_5 = (unsigned short)64440;
unsigned long long int var_6 = 9951296143468336903ULL;
int zero = 0;
unsigned int var_12 = 4122602944U;
unsigned int var_13 = 2362916758U;
unsigned long long int var_14 = 10584910094483792118ULL;
unsigned int var_15 = 2812761083U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
