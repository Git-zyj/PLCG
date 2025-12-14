#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-93;
unsigned char var_8 = (unsigned char)199;
unsigned char var_11 = (unsigned char)130;
unsigned char var_13 = (unsigned char)102;
int zero = 0;
unsigned short var_15 = (unsigned short)3837;
int var_16 = -2006816134;
unsigned int var_17 = 3856915983U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
