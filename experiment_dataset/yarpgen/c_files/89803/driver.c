#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10973112062868719679ULL;
int var_6 = -1442807939;
short var_11 = (short)28045;
unsigned long long int var_12 = 15989743126421008737ULL;
int var_14 = -57017198;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_17 = (short)31484;
short var_18 = (short)-18510;
int var_19 = -204860125;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
