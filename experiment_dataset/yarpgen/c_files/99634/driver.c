#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9617;
short var_2 = (short)-17344;
unsigned char var_4 = (unsigned char)28;
_Bool var_5 = (_Bool)0;
signed char var_9 = (signed char)-59;
unsigned int var_10 = 1146269171U;
int zero = 0;
unsigned int var_11 = 825690049U;
unsigned char var_12 = (unsigned char)243;
unsigned int var_13 = 2982480717U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
