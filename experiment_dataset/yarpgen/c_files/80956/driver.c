#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32493;
unsigned short var_6 = (unsigned short)57624;
unsigned int var_7 = 3877048533U;
_Bool var_8 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_16 = (short)8116;
int var_17 = -1647166829;
unsigned short var_18 = (unsigned short)116;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
