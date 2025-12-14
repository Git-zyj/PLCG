#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27946;
long long int var_10 = 1781809952857825348LL;
long long int var_14 = -8504265471055718007LL;
int zero = 0;
signed char var_20 = (signed char)93;
long long int var_21 = 7748220975766869997LL;
signed char var_22 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
