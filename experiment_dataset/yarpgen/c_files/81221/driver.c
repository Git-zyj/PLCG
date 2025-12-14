#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1454966256U;
unsigned char var_8 = (unsigned char)6;
int zero = 0;
unsigned long long int var_17 = 16482656001190797268ULL;
unsigned short var_18 = (unsigned short)46914;
unsigned long long int var_19 = 515231503128883564ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
