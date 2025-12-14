#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)17477;
unsigned long long int var_12 = 14144769288566885045ULL;
unsigned long long int var_17 = 8445678591391068500ULL;
int zero = 0;
unsigned long long int var_19 = 96897752655199290ULL;
unsigned long long int var_20 = 3216981810856107034ULL;
unsigned int var_21 = 1278290165U;
int var_22 = 1322837870;
signed char var_23 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
