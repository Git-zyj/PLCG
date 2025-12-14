#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2639212734733881789ULL;
unsigned int var_8 = 2170936588U;
int var_9 = -989179866;
int zero = 0;
signed char var_11 = (signed char)-23;
signed char var_12 = (signed char)90;
unsigned int var_13 = 3856593983U;
unsigned int var_14 = 2798043552U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
