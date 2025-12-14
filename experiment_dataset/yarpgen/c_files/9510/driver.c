#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)12;
long long int var_2 = 320037343090951747LL;
unsigned int var_4 = 24661498U;
unsigned char var_6 = (unsigned char)214;
long long int var_9 = 6782108637845437794LL;
int zero = 0;
unsigned short var_14 = (unsigned short)56482;
unsigned short var_15 = (unsigned short)26113;
unsigned short var_16 = (unsigned short)5162;
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
