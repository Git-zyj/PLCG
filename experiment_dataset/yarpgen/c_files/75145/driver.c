#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14098082508422950700ULL;
signed char var_5 = (signed char)-41;
unsigned long long int var_8 = 17634186569139811936ULL;
int zero = 0;
long long int var_10 = 6657832932747407368LL;
short var_11 = (short)-31406;
int var_12 = 380566694;
unsigned int var_13 = 3934663870U;
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
