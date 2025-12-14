#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -958708071;
long long int var_8 = 2508403072341284953LL;
short var_14 = (short)20980;
int zero = 0;
unsigned int var_15 = 2956468451U;
unsigned char var_16 = (unsigned char)119;
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
