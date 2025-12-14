#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1992319002793744416ULL;
signed char var_2 = (signed char)-15;
unsigned int var_5 = 2269155661U;
short var_7 = (short)-22923;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_17 = -1376970199;
int var_18 = -108682204;
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
