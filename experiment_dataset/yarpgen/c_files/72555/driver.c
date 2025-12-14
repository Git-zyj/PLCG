#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19100;
unsigned int var_3 = 3733280337U;
unsigned long long int var_4 = 11712509019835812271ULL;
unsigned short var_6 = (unsigned short)13557;
short var_7 = (short)-7451;
signed char var_9 = (signed char)-81;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)-7351;
short var_13 = (short)17535;
unsigned int var_14 = 3497952275U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 175307444U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
