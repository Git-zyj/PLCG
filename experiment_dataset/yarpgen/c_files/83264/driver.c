#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3941381098U;
long long int var_8 = 7509538000165277707LL;
int var_10 = -1946137055;
int zero = 0;
unsigned int var_12 = 3442966765U;
signed char var_13 = (signed char)30;
signed char var_14 = (signed char)49;
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
