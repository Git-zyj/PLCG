#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14212915756116170983ULL;
unsigned int var_2 = 2760051653U;
unsigned char var_11 = (unsigned char)181;
int zero = 0;
unsigned char var_14 = (unsigned char)155;
unsigned long long int var_15 = 11157129307176564069ULL;
unsigned char var_16 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
