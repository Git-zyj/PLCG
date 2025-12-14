#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6385514422330501494ULL;
unsigned char var_12 = (unsigned char)246;
unsigned char var_15 = (unsigned char)251;
unsigned long long int var_18 = 7601617358505616071ULL;
unsigned char var_19 = (unsigned char)60;
int zero = 0;
unsigned short var_20 = (unsigned short)34270;
long long int var_21 = 2752770540244134000LL;
void init() {
}

void checksum() {
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
