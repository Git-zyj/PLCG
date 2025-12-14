#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1594073804U;
unsigned short var_4 = (unsigned short)43469;
int var_7 = 2144932346;
int zero = 0;
unsigned long long int var_12 = 3718341152498300835ULL;
short var_13 = (short)-6052;
unsigned long long int var_14 = 14653959298044521864ULL;
unsigned short var_15 = (unsigned short)51578;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
