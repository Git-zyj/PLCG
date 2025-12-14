#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3684157628622041277ULL;
unsigned int var_3 = 1832921877U;
unsigned int var_4 = 2029851027U;
int var_5 = 2006078566;
unsigned long long int var_9 = 624368115825875217ULL;
int zero = 0;
unsigned int var_11 = 3958785944U;
signed char var_12 = (signed char)-36;
short var_13 = (short)-20380;
void init() {
}

void checksum() {
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
