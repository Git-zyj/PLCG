#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)65;
unsigned char var_6 = (unsigned char)66;
long long int var_8 = -1052088631825138939LL;
short var_12 = (short)-7077;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 710033685U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
