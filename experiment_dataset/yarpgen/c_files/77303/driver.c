#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)16;
unsigned long long int var_6 = 3341410853163875500ULL;
unsigned long long int var_11 = 16419843001601772597ULL;
int zero = 0;
unsigned long long int var_12 = 7079700652967612167ULL;
long long int var_13 = -7435477171211038316LL;
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
