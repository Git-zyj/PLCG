#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34781;
signed char var_3 = (signed char)67;
unsigned int var_6 = 1443872753U;
signed char var_14 = (signed char)-92;
int zero = 0;
int var_20 = -376148986;
long long int var_21 = -2901376567035210184LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
