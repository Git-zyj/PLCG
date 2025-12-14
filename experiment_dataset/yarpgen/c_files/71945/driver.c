#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17029;
unsigned short var_1 = (unsigned short)4222;
int var_6 = 1990616577;
int var_7 = 526870456;
unsigned long long int var_8 = 12467481745827818669ULL;
_Bool var_10 = (_Bool)0;
int var_11 = -2105249436;
int zero = 0;
long long int var_12 = -3343683637809319LL;
int var_13 = 133052407;
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
