#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
unsigned long long int var_1 = 2502646523636019744ULL;
unsigned long long int var_6 = 696389898564354103ULL;
unsigned long long int var_11 = 9094077288797716788ULL;
int zero = 0;
short var_12 = (short)-13155;
unsigned char var_13 = (unsigned char)154;
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
