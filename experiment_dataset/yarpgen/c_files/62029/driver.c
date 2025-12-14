#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6738673594840296211LL;
signed char var_2 = (signed char)75;
unsigned int var_3 = 2878855893U;
int var_4 = -224462859;
unsigned short var_5 = (unsigned short)13402;
unsigned short var_7 = (unsigned short)18347;
unsigned long long int var_8 = 15205574657749303384ULL;
long long int var_10 = -2598720260711924307LL;
int zero = 0;
int var_12 = 95037605;
int var_13 = -1671882094;
void init() {
}

void checksum() {
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
