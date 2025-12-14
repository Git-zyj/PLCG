#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5785;
signed char var_4 = (signed char)-46;
unsigned int var_5 = 3690005701U;
long long int var_6 = 5766860863268573301LL;
signed char var_7 = (signed char)109;
short var_9 = (short)29052;
int zero = 0;
unsigned int var_11 = 2946145497U;
unsigned short var_12 = (unsigned short)16565;
int var_13 = 1947398809;
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
