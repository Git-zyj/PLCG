#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)52;
unsigned char var_2 = (unsigned char)255;
long long int var_6 = 5684653612196869818LL;
unsigned int var_12 = 1246517295U;
unsigned long long int var_14 = 14575014732727274562ULL;
int zero = 0;
int var_15 = 1847566804;
signed char var_16 = (signed char)-56;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
