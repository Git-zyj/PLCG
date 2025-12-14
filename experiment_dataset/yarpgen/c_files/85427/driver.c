#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1498014384U;
unsigned int var_5 = 2063428413U;
unsigned int var_12 = 1486692727U;
unsigned long long int var_14 = 17621920686322527123ULL;
int zero = 0;
unsigned long long int var_18 = 5610199860251241803ULL;
unsigned long long int var_19 = 3517785405592019781ULL;
void init() {
}

void checksum() {
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
