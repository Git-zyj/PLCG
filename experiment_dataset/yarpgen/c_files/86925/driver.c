#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)95;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int var_10 = -1922838690;
int zero = 0;
int var_14 = 515981969;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2094945417U;
unsigned char var_17 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
