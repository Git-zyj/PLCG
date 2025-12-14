#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10376656231876766162ULL;
long long int var_8 = -1170554055849819868LL;
short var_16 = (short)-14063;
short var_17 = (short)-17475;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)16;
short var_22 = (short)5704;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
