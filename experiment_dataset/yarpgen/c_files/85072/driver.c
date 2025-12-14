#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)1820;
unsigned short var_8 = (unsigned short)24552;
unsigned short var_9 = (unsigned short)15885;
unsigned short var_10 = (unsigned short)49675;
int zero = 0;
signed char var_15 = (signed char)72;
unsigned short var_16 = (unsigned short)44210;
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
