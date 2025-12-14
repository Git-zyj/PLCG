#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-91;
unsigned long long int var_5 = 12146639304678185723ULL;
unsigned long long int var_7 = 11817673664863681518ULL;
unsigned int var_8 = 3418467639U;
unsigned int var_9 = 1376020449U;
unsigned int var_11 = 3468135128U;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 1181067391U;
int zero = 0;
signed char var_18 = (signed char)-66;
int var_19 = 1811679402;
void init() {
}

void checksum() {
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
