#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 28339751;
int var_1 = 1804405568;
unsigned short var_9 = (unsigned short)40152;
int var_11 = -1725881709;
int var_12 = -1652776289;
unsigned long long int var_13 = 10389036116149792418ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)6;
void init() {
}

void checksum() {
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
