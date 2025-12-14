#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44448;
signed char var_4 = (signed char)-48;
unsigned int var_5 = 2698426954U;
unsigned long long int var_7 = 13166405710335659876ULL;
_Bool var_10 = (_Bool)1;
int var_11 = 434211817;
int var_13 = -215714989;
unsigned int var_14 = 2264682837U;
int zero = 0;
unsigned long long int var_15 = 14754097617392334512ULL;
int var_16 = 107074929;
unsigned int var_17 = 3521117054U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
