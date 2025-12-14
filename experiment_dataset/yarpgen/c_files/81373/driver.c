#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -380217154;
int var_6 = 1951336504;
int var_9 = 168076692;
unsigned int var_11 = 2651333050U;
int zero = 0;
unsigned int var_12 = 1176528663U;
long long int var_13 = -3562606277025436357LL;
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
