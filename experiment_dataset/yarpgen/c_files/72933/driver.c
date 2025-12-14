#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2119725327U;
unsigned char var_9 = (unsigned char)166;
unsigned short var_16 = (unsigned short)54694;
int zero = 0;
unsigned short var_18 = (unsigned short)39958;
unsigned short var_19 = (unsigned short)17005;
unsigned int var_20 = 999778919U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
