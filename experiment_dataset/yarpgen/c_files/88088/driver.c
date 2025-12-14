#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)58644;
unsigned short var_14 = (unsigned short)40506;
unsigned short var_16 = (unsigned short)23724;
int zero = 0;
unsigned short var_17 = (unsigned short)30018;
unsigned short var_18 = (unsigned short)50885;
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
