#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
short var_2 = (short)-22218;
unsigned long long int var_14 = 2095842214086409135ULL;
int zero = 0;
unsigned long long int var_18 = 6463068881664380686ULL;
signed char var_19 = (signed char)-31;
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
