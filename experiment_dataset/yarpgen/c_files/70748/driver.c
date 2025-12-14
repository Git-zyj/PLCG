#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30212;
unsigned int var_1 = 1399779053U;
unsigned long long int var_7 = 2952548271873743318ULL;
unsigned int var_9 = 3014112802U;
unsigned long long int var_11 = 16117730306724248364ULL;
unsigned short var_12 = (unsigned short)46619;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1146925522U;
unsigned int var_21 = 1376899336U;
short var_22 = (short)-12101;
signed char var_23 = (signed char)56;
unsigned long long int var_24 = 7568099359193987456ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
