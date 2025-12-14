#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4169063660967680197ULL;
long long int var_4 = 9007572588879387753LL;
unsigned int var_5 = 3321020668U;
int var_8 = -690770666;
int var_11 = 1473278713;
int zero = 0;
unsigned long long int var_13 = 13650291866402027822ULL;
int var_14 = -1652796252;
int var_15 = 1227531063;
void init() {
}

void checksum() {
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
