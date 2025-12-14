#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)157;
long long int var_3 = 1414811604327165175LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 1699539384U;
long long int var_20 = 1179559314517494959LL;
int var_21 = 1690537493;
void init() {
}

void checksum() {
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
