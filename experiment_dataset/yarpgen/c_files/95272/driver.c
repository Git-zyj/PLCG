#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11193481517723525796ULL;
long long int var_5 = -5763253542788387166LL;
unsigned int var_6 = 2291954591U;
unsigned int var_7 = 2296605583U;
int zero = 0;
signed char var_12 = (signed char)65;
unsigned int var_13 = 560527387U;
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
