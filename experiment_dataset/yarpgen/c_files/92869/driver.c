#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)12;
signed char var_9 = (signed char)121;
unsigned char var_10 = (unsigned char)24;
int zero = 0;
unsigned long long int var_15 = 6913132811341900377ULL;
signed char var_16 = (signed char)-99;
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
