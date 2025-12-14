#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2286;
unsigned long long int var_3 = 11657266767897139502ULL;
long long int var_4 = 7641908210865262701LL;
unsigned long long int var_7 = 13660890877400352173ULL;
signed char var_9 = (signed char)5;
int zero = 0;
unsigned char var_10 = (unsigned char)99;
unsigned char var_11 = (unsigned char)207;
signed char var_12 = (signed char)-110;
signed char var_13 = (signed char)71;
unsigned short var_14 = (unsigned short)52918;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
