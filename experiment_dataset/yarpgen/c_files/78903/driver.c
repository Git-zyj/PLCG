#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)195;
unsigned char var_5 = (unsigned char)199;
unsigned char var_6 = (unsigned char)166;
int zero = 0;
unsigned char var_10 = (unsigned char)154;
unsigned char var_11 = (unsigned char)200;
unsigned char var_12 = (unsigned char)169;
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
