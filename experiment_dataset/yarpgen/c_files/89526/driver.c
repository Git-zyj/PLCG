#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 4626733406674296172LL;
unsigned int var_16 = 880942225U;
short var_17 = (short)-2798;
long long int var_18 = 2148223904133422420LL;
int zero = 0;
unsigned int var_19 = 3487850618U;
long long int var_20 = 4854858611975330468LL;
unsigned short var_21 = (unsigned short)48890;
long long int var_22 = 8711177216006695493LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
