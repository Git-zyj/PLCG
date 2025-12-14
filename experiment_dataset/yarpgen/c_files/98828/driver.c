#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12552103484951201270ULL;
unsigned long long int var_3 = 7203662209883905093ULL;
unsigned long long int var_5 = 11880963589229773246ULL;
unsigned short var_11 = (unsigned short)15201;
unsigned short var_13 = (unsigned short)56947;
unsigned short var_16 = (unsigned short)35841;
unsigned short var_17 = (unsigned short)21563;
unsigned long long int var_18 = 15577533457251446349ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)2470;
unsigned long long int var_20 = 14564743185757093387ULL;
unsigned long long int var_21 = 17852893748330332516ULL;
void init() {
}

void checksum() {
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
