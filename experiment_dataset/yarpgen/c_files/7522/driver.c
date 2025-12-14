#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)6578;
unsigned short var_9 = (unsigned short)38774;
long long int var_12 = -4260413334383111546LL;
signed char var_13 = (signed char)-62;
int var_17 = -198887108;
unsigned short var_18 = (unsigned short)44405;
int zero = 0;
short var_19 = (short)-17272;
unsigned short var_20 = (unsigned short)946;
unsigned int var_21 = 1246290099U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
