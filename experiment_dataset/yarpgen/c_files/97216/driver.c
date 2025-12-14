#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 179828745;
short var_9 = (short)6901;
short var_10 = (short)-25249;
signed char var_12 = (signed char)-75;
int zero = 0;
unsigned long long int var_15 = 14285074599901290360ULL;
unsigned long long int var_16 = 8762700489045401799ULL;
signed char var_17 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
