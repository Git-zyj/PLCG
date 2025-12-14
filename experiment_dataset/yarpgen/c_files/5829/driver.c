#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 590156253;
int var_3 = -377425;
int var_5 = -1695414101;
unsigned short var_8 = (unsigned short)51517;
int zero = 0;
unsigned char var_12 = (unsigned char)163;
unsigned short var_13 = (unsigned short)45705;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
