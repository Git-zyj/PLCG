#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5982580842242985122ULL;
short var_9 = (short)-23361;
int var_15 = -1834520346;
int zero = 0;
unsigned int var_19 = 1199434714U;
unsigned long long int var_20 = 5372760218378257012ULL;
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
