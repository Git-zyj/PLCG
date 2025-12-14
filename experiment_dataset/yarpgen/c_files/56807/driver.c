#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5737034143471440151LL;
unsigned int var_7 = 2465871114U;
unsigned int var_8 = 1890832823U;
long long int var_9 = -2653333318822101662LL;
int zero = 0;
long long int var_13 = -4110719214858983502LL;
short var_14 = (short)21119;
int var_15 = 188925374;
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
