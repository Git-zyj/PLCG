#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)132;
unsigned long long int var_10 = 3137381459290574597ULL;
unsigned int var_13 = 811044826U;
int zero = 0;
signed char var_16 = (signed char)-73;
unsigned long long int var_17 = 5506170745268842638ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
