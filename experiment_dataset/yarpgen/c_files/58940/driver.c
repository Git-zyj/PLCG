#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24570;
short var_5 = (short)27082;
signed char var_6 = (signed char)-16;
long long int var_8 = 2392517416433958042LL;
long long int var_9 = 4970168215059041153LL;
int zero = 0;
unsigned long long int var_13 = 4936553927839626858ULL;
unsigned long long int var_14 = 18411268476554428945ULL;
unsigned int var_15 = 555871182U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
