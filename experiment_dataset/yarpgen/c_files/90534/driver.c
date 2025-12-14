#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)39;
unsigned char var_4 = (unsigned char)222;
unsigned char var_7 = (unsigned char)52;
unsigned char var_8 = (unsigned char)175;
unsigned char var_10 = (unsigned char)99;
int zero = 0;
unsigned char var_15 = (unsigned char)161;
unsigned char var_16 = (unsigned char)245;
unsigned char var_17 = (unsigned char)136;
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
