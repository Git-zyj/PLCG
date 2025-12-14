#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1163563034;
int var_7 = 916847092;
short var_12 = (short)4401;
int zero = 0;
unsigned int var_18 = 2369671498U;
signed char var_19 = (signed char)-53;
unsigned long long int var_20 = 6971807647987264615ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
