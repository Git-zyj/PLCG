#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16806227006360503326ULL;
int var_1 = 942448771;
signed char var_6 = (signed char)-53;
int zero = 0;
unsigned int var_17 = 939127890U;
signed char var_18 = (signed char)-61;
int var_19 = -1341778393;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
