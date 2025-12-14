#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
short var_7 = (short)25525;
unsigned short var_10 = (unsigned short)29481;
int var_12 = 1430388951;
int zero = 0;
unsigned char var_14 = (unsigned char)159;
unsigned int var_15 = 1742461435U;
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
