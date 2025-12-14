#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-95;
signed char var_5 = (signed char)66;
short var_9 = (short)11040;
int var_10 = -1814319216;
unsigned int var_13 = 2281057629U;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)69;
int zero = 0;
unsigned int var_17 = 3343490758U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
