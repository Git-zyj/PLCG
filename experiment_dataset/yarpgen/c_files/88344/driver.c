#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26721;
signed char var_5 = (signed char)-74;
signed char var_6 = (signed char)-99;
signed char var_7 = (signed char)-98;
signed char var_8 = (signed char)-42;
unsigned long long int var_9 = 14924022520860306483ULL;
int zero = 0;
unsigned int var_12 = 3958298320U;
signed char var_13 = (signed char)-101;
int var_14 = 493603003;
unsigned int var_15 = 1220804246U;
unsigned int var_16 = 2600663205U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
