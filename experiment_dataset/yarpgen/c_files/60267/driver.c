#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)62481;
unsigned char var_18 = (unsigned char)225;
unsigned char var_19 = (unsigned char)11;
int zero = 0;
unsigned short var_20 = (unsigned short)1907;
unsigned int var_21 = 1351118918U;
unsigned short var_22 = (unsigned short)14173;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
