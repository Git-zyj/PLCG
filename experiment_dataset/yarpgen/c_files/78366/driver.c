#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-52;
unsigned int var_4 = 1863490720U;
int var_12 = 1986435667;
unsigned long long int var_14 = 5226103305884438422ULL;
int zero = 0;
unsigned int var_20 = 1142702505U;
unsigned int var_21 = 1744680452U;
signed char var_22 = (signed char)-37;
int var_23 = 2068162825;
unsigned int var_24 = 2508771650U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
