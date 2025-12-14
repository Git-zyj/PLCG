#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 442965099;
unsigned short var_12 = (unsigned short)27954;
unsigned short var_16 = (unsigned short)28602;
int zero = 0;
unsigned short var_20 = (unsigned short)8561;
int var_21 = -458603824;
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
