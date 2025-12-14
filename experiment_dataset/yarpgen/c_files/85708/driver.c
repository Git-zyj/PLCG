#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37795;
unsigned short var_4 = (unsigned short)24391;
unsigned short var_9 = (unsigned short)15488;
unsigned short var_10 = (unsigned short)47368;
int zero = 0;
unsigned short var_14 = (unsigned short)37644;
unsigned short var_15 = (unsigned short)24674;
unsigned short var_16 = (unsigned short)59206;
void init() {
}

void checksum() {
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
