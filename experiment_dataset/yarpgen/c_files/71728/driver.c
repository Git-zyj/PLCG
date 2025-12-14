#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
short var_10 = (short)19124;
int var_12 = 398260984;
int zero = 0;
long long int var_15 = 2776189868925014397LL;
unsigned char var_16 = (unsigned char)118;
unsigned short var_17 = (unsigned short)40836;
void init() {
}

void checksum() {
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
