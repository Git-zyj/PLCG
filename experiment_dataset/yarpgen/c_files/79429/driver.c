#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10313509150869649559ULL;
short var_15 = (short)21655;
unsigned short var_16 = (unsigned short)6480;
int zero = 0;
signed char var_17 = (signed char)-71;
unsigned long long int var_18 = 2484153033729455364ULL;
int var_19 = -111898346;
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
