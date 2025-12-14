#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17119069442877118357ULL;
unsigned long long int var_5 = 14162990954063088223ULL;
unsigned int var_6 = 2078172532U;
int var_8 = 663503313;
int zero = 0;
short var_11 = (short)5744;
int var_12 = 137382914;
unsigned char var_13 = (unsigned char)15;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
