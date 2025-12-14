#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_5 = 2142182042658122587LL;
unsigned char var_6 = (unsigned char)65;
unsigned int var_8 = 4035373968U;
unsigned int var_11 = 1206144106U;
unsigned int var_12 = 1845765639U;
unsigned char var_14 = (unsigned char)21;
int zero = 0;
unsigned long long int var_17 = 1254834752102299291ULL;
unsigned char var_18 = (unsigned char)92;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
