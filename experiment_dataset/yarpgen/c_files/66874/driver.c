#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1359175632;
unsigned int var_10 = 2572805934U;
long long int var_13 = -7293432421320542229LL;
unsigned int var_14 = 3465735137U;
int zero = 0;
unsigned long long int var_18 = 13362874592967683124ULL;
unsigned short var_19 = (unsigned short)13587;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
