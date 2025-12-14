#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)51;
long long int var_3 = 670794812971393570LL;
short var_7 = (short)-23065;
unsigned int var_9 = 525882050U;
unsigned long long int var_13 = 4083528189298328256ULL;
int zero = 0;
unsigned int var_16 = 3776203330U;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 3474281025258793539ULL;
short var_19 = (short)-16486;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
