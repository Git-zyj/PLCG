#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -495095485203320969LL;
unsigned int var_2 = 620005082U;
unsigned int var_5 = 1376505510U;
unsigned int var_8 = 1930536035U;
long long int var_12 = -5768228519363462847LL;
int zero = 0;
unsigned char var_18 = (unsigned char)204;
unsigned short var_19 = (unsigned short)3054;
unsigned short var_20 = (unsigned short)29803;
unsigned int var_21 = 3194891750U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
