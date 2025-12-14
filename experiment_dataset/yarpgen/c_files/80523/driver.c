#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3887327277U;
int var_2 = 1904851073;
int var_6 = -187290115;
int var_10 = -593200109;
unsigned int var_14 = 2718523393U;
unsigned int var_15 = 3152941825U;
unsigned int var_17 = 3271967695U;
int zero = 0;
unsigned int var_18 = 759714148U;
int var_19 = 953259312;
int var_20 = -630911788;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
