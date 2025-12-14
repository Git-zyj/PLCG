#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)20248;
unsigned short var_7 = (unsigned short)30856;
unsigned short var_8 = (unsigned short)23463;
unsigned short var_10 = (unsigned short)3024;
int zero = 0;
unsigned char var_11 = (unsigned char)23;
unsigned char var_12 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
