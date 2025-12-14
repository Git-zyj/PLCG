#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)63693;
unsigned long long int var_5 = 12308961561252551073ULL;
short var_9 = (short)-11185;
unsigned long long int var_10 = 6851950780585375936ULL;
unsigned int var_13 = 3721738496U;
unsigned int var_15 = 1037481899U;
signed char var_16 = (signed char)58;
int zero = 0;
signed char var_17 = (signed char)102;
signed char var_18 = (signed char)122;
int var_19 = -1624291806;
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
