#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -573468192;
signed char var_7 = (signed char)49;
short var_9 = (short)-14763;
int zero = 0;
unsigned long long int var_15 = 13929278800529225831ULL;
unsigned long long int var_16 = 1454709723766753012ULL;
signed char var_17 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
