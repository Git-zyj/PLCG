#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2760153250U;
short var_2 = (short)-30438;
short var_4 = (short)-30857;
unsigned long long int var_5 = 134149243633059584ULL;
short var_7 = (short)-24323;
int var_9 = -1319932691;
unsigned short var_11 = (unsigned short)58224;
int zero = 0;
signed char var_16 = (signed char)-116;
signed char var_17 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
