#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-32;
signed char var_4 = (signed char)-36;
signed char var_5 = (signed char)77;
signed char var_9 = (signed char)88;
signed char var_15 = (signed char)-59;
int zero = 0;
short var_19 = (short)10943;
int var_20 = 455776928;
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
