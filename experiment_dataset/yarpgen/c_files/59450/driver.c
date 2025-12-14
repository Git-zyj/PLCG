#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)88;
unsigned short var_2 = (unsigned short)9902;
unsigned short var_4 = (unsigned short)37354;
unsigned short var_9 = (unsigned short)18715;
unsigned int var_10 = 2880543456U;
int zero = 0;
unsigned short var_13 = (unsigned short)3448;
unsigned short var_14 = (unsigned short)42782;
unsigned int var_15 = 282847041U;
int var_16 = -227333816;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
