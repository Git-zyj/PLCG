#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 413434610U;
unsigned int var_5 = 196256843U;
_Bool var_8 = (_Bool)0;
unsigned int var_12 = 56196348U;
unsigned long long int var_13 = 17277554205937454849ULL;
unsigned long long int var_15 = 11324591839210960462ULL;
unsigned short var_17 = (unsigned short)27819;
int zero = 0;
short var_18 = (short)1414;
signed char var_19 = (signed char)2;
short var_20 = (short)-26813;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
