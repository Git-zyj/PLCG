#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)231;
signed char var_10 = (signed char)-63;
unsigned int var_13 = 1168653310U;
unsigned int var_15 = 2269801685U;
int zero = 0;
long long int var_16 = 5945923448291264926LL;
unsigned char var_17 = (unsigned char)246;
void init() {
}

void checksum() {
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
