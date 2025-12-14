#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1971847923U;
short var_2 = (short)-26734;
unsigned short var_3 = (unsigned short)16864;
signed char var_4 = (signed char)-75;
unsigned int var_5 = 2255139732U;
unsigned long long int var_10 = 857738355761893310ULL;
unsigned int var_11 = 2751647478U;
int zero = 0;
unsigned long long int var_12 = 10461190144704427178ULL;
long long int var_13 = -3333539142537139754LL;
unsigned short var_14 = (unsigned short)1625;
void init() {
}

void checksum() {
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
