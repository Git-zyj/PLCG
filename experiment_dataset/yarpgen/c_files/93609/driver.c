#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12841;
unsigned short var_5 = (unsigned short)35564;
unsigned int var_8 = 1933156882U;
short var_16 = (short)4485;
int var_18 = -1364732909;
int zero = 0;
unsigned char var_19 = (unsigned char)168;
unsigned char var_20 = (unsigned char)158;
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
