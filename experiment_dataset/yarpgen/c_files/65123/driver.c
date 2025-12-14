#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 349704307U;
unsigned char var_11 = (unsigned char)190;
int zero = 0;
unsigned char var_19 = (unsigned char)14;
int var_20 = -407496631;
unsigned short var_21 = (unsigned short)58536;
unsigned char var_22 = (unsigned char)44;
int var_23 = -182081115;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
