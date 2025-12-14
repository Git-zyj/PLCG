#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5085017022675509036ULL;
unsigned long long int var_4 = 16087843403555152377ULL;
unsigned long long int var_10 = 4284887355816447882ULL;
unsigned long long int var_16 = 6491419583590833483ULL;
int zero = 0;
int var_19 = -80132028;
unsigned long long int var_20 = 6314014474916102281ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
