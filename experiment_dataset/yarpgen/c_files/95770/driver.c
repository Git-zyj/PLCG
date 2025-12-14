#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)92;
unsigned int var_3 = 2704942574U;
unsigned int var_7 = 4212591244U;
unsigned char var_10 = (unsigned char)231;
unsigned long long int var_12 = 9374732462286761325ULL;
int zero = 0;
signed char var_14 = (signed char)-64;
short var_15 = (short)-15270;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
