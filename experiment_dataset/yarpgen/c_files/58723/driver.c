#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)12903;
short var_10 = (short)22270;
short var_12 = (short)20373;
int zero = 0;
int var_17 = -714959523;
signed char var_18 = (signed char)28;
signed char var_19 = (signed char)22;
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
