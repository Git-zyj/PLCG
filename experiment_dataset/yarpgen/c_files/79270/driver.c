#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 2874425126897865894ULL;
unsigned long long int var_10 = 16800168185810178844ULL;
int zero = 0;
long long int var_12 = 8663863930118199607LL;
unsigned short var_13 = (unsigned short)11032;
unsigned long long int var_14 = 15292779839819806446ULL;
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
