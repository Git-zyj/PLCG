#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-100;
signed char var_5 = (signed char)-86;
long long int var_9 = -4446248831368668995LL;
long long int var_18 = 8116439504174176918LL;
int zero = 0;
unsigned short var_19 = (unsigned short)42364;
int var_20 = 1423259361;
unsigned long long int var_21 = 12581254601676604322ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
