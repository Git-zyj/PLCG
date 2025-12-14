#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19892;
unsigned long long int var_7 = 5129317708329309233ULL;
int zero = 0;
unsigned long long int var_13 = 15947426308520517471ULL;
unsigned long long int var_14 = 14030909150469113347ULL;
unsigned long long int var_15 = 1455469531890747261ULL;
long long int var_16 = 518943662164709293LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
