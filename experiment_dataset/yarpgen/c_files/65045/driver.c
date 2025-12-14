#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5311922872754568335ULL;
signed char var_8 = (signed char)56;
unsigned char var_11 = (unsigned char)212;
unsigned short var_17 = (unsigned short)23868;
int zero = 0;
unsigned char var_20 = (unsigned char)116;
int var_21 = -186477513;
unsigned long long int var_22 = 13263465826715667562ULL;
unsigned int var_23 = 581506147U;
int var_24 = -1716885075;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
