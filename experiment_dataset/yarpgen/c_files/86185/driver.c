#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1822464459U;
int var_5 = 551049034;
int zero = 0;
signed char var_10 = (signed char)-8;
unsigned long long int var_11 = 13277125468687595871ULL;
long long int var_12 = 3019742603055777269LL;
short var_13 = (short)-14354;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
