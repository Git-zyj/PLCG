#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1529167748621802491LL;
unsigned long long int var_1 = 890875962740675322ULL;
short var_6 = (short)30105;
short var_8 = (short)12954;
int zero = 0;
long long int var_10 = -2900798841282118221LL;
short var_11 = (short)11165;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
