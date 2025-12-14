#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)169;
signed char var_11 = (signed char)110;
int var_17 = 1756738315;
int zero = 0;
unsigned char var_20 = (unsigned char)22;
unsigned short var_21 = (unsigned short)65095;
unsigned char var_22 = (unsigned char)72;
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
