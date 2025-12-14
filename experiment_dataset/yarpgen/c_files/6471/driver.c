#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1958157117035835584ULL;
unsigned int var_4 = 3151304678U;
unsigned char var_12 = (unsigned char)217;
int zero = 0;
unsigned int var_20 = 2340462933U;
short var_21 = (short)2707;
unsigned char var_22 = (unsigned char)198;
void init() {
}

void checksum() {
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
