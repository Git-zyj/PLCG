#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15396;
unsigned int var_1 = 4110103149U;
unsigned int var_5 = 1199812842U;
short var_6 = (short)-27842;
long long int var_9 = -555774145996387906LL;
int zero = 0;
unsigned int var_11 = 887148552U;
unsigned int var_12 = 2235479866U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
