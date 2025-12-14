#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
unsigned char var_1 = (unsigned char)52;
long long int var_3 = -7250133894034629070LL;
signed char var_4 = (signed char)62;
unsigned char var_5 = (unsigned char)198;
unsigned char var_12 = (unsigned char)13;
int zero = 0;
unsigned short var_14 = (unsigned short)16593;
signed char var_15 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
