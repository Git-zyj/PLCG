#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15454234480717494191ULL;
signed char var_7 = (signed char)80;
short var_9 = (short)-14436;
unsigned long long int var_10 = 11596886762400608153ULL;
int zero = 0;
unsigned long long int var_12 = 16392740997381634306ULL;
short var_13 = (short)29957;
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
