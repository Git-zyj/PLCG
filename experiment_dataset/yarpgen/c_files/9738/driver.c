#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17206558938972050837ULL;
signed char var_12 = (signed char)12;
unsigned short var_18 = (unsigned short)60030;
int zero = 0;
unsigned int var_19 = 3490017802U;
long long int var_20 = 7054184544728361911LL;
unsigned short var_21 = (unsigned short)29127;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
