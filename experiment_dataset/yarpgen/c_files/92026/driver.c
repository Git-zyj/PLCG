#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4914427131085625002ULL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-105;
_Bool var_12 = (_Bool)1;
short var_13 = (short)10178;
int zero = 0;
short var_15 = (short)7337;
unsigned long long int var_16 = 16817633121000150728ULL;
void init() {
}

void checksum() {
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
