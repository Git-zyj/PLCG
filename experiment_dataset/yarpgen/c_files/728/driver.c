#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
unsigned char var_9 = (unsigned char)156;
int var_11 = -421546073;
unsigned short var_13 = (unsigned short)64383;
signed char var_15 = (signed char)77;
int zero = 0;
unsigned int var_20 = 2133898319U;
int var_21 = 741530239;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
