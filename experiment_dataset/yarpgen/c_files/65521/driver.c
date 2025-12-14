#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47185;
long long int var_2 = -3526092288539882708LL;
long long int var_5 = 9035493000111396009LL;
unsigned char var_8 = (unsigned char)43;
int zero = 0;
int var_12 = 1833918902;
unsigned int var_13 = 609703110U;
unsigned short var_14 = (unsigned short)48433;
void init() {
}

void checksum() {
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
