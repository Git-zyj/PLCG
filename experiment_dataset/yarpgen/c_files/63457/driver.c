#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -3934640639755946037LL;
unsigned int var_18 = 817576643U;
int zero = 0;
unsigned int var_20 = 2845519516U;
unsigned char var_21 = (unsigned char)89;
unsigned char var_22 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
