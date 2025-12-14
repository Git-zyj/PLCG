#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_6 = (short)24103;
unsigned char var_7 = (unsigned char)84;
long long int var_9 = 1794484955800513011LL;
int zero = 0;
unsigned short var_19 = (unsigned short)33541;
signed char var_20 = (signed char)-71;
unsigned int var_21 = 159929162U;
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
