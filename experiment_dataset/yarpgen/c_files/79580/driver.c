#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19926;
unsigned short var_2 = (unsigned short)42790;
unsigned char var_3 = (unsigned char)16;
unsigned long long int var_4 = 10627598520964720935ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)9;
unsigned char var_11 = (unsigned char)234;
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
