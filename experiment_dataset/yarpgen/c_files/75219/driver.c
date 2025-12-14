#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -356523944691296962LL;
unsigned short var_3 = (unsigned short)44918;
unsigned short var_6 = (unsigned short)17054;
int zero = 0;
unsigned char var_10 = (unsigned char)11;
signed char var_11 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
