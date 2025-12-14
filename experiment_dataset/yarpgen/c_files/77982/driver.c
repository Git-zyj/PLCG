#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-31;
unsigned char var_6 = (unsigned char)100;
signed char var_7 = (signed char)-53;
int var_8 = -156791319;
int var_9 = -1515371446;
int zero = 0;
int var_10 = -1775008241;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
