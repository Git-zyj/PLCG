#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1695736100U;
unsigned int var_2 = 2901792796U;
_Bool var_4 = (_Bool)0;
long long int var_5 = -3633089755600317143LL;
int zero = 0;
unsigned char var_20 = (unsigned char)2;
short var_21 = (short)-2019;
unsigned int var_22 = 650350177U;
unsigned int var_23 = 1032829607U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
