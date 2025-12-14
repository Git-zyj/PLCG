#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3615590699U;
unsigned char var_1 = (unsigned char)51;
unsigned int var_3 = 2505846017U;
unsigned short var_5 = (unsigned short)15333;
int zero = 0;
unsigned char var_10 = (unsigned char)30;
unsigned char var_11 = (unsigned char)229;
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
