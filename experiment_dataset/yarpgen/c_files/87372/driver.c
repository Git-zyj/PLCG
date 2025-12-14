#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54945;
unsigned short var_4 = (unsigned short)7909;
signed char var_6 = (signed char)101;
unsigned int var_7 = 1584654538U;
unsigned char var_12 = (unsigned char)252;
unsigned short var_14 = (unsigned short)2623;
int zero = 0;
unsigned short var_16 = (unsigned short)38884;
long long int var_17 = 6315445622830905981LL;
unsigned int var_18 = 2763008881U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
