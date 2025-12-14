#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6366370894027734707ULL;
unsigned long long int var_12 = 6615855787562135478ULL;
short var_14 = (short)-4604;
int zero = 0;
short var_15 = (short)-21510;
short var_16 = (short)-16961;
short var_17 = (short)-22744;
unsigned long long int var_18 = 3793121314418333117ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
