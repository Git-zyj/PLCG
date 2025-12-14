#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 615379726;
unsigned char var_3 = (unsigned char)74;
unsigned char var_13 = (unsigned char)52;
int zero = 0;
long long int var_19 = -5098904296381307992LL;
unsigned int var_20 = 2040591389U;
void init() {
}

void checksum() {
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
