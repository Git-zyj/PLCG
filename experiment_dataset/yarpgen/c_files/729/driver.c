#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)255;
signed char var_4 = (signed char)20;
unsigned char var_5 = (unsigned char)2;
int var_8 = -2015807383;
int zero = 0;
unsigned char var_10 = (unsigned char)150;
unsigned char var_11 = (unsigned char)59;
unsigned char var_12 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
