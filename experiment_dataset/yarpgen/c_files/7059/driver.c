#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2007328932;
unsigned char var_1 = (unsigned char)92;
int var_2 = 265942193;
signed char var_4 = (signed char)86;
unsigned char var_8 = (unsigned char)27;
int var_12 = 669097694;
unsigned char var_13 = (unsigned char)122;
signed char var_16 = (signed char)-5;
int zero = 0;
signed char var_18 = (signed char)10;
unsigned char var_19 = (unsigned char)140;
int var_20 = -1176144025;
signed char var_21 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
