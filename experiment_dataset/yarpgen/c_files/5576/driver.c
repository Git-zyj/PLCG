#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-26;
int var_4 = 381165962;
unsigned char var_10 = (unsigned char)176;
unsigned char var_14 = (unsigned char)5;
int zero = 0;
int var_16 = 1778842495;
unsigned short var_17 = (unsigned short)61186;
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
