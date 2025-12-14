#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3569348595964756803LL;
short var_11 = (short)-1339;
unsigned long long int var_12 = 1686932966109383511ULL;
int zero = 0;
unsigned long long int var_13 = 2109009171252345525ULL;
signed char var_14 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
