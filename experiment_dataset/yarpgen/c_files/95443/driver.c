#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 4231389529U;
unsigned int var_4 = 2800982620U;
short var_6 = (short)-14395;
signed char var_9 = (signed char)-34;
unsigned long long int var_11 = 15919769485114031462ULL;
unsigned int var_12 = 3011728013U;
int zero = 0;
signed char var_13 = (signed char)74;
int var_14 = 2063266845;
unsigned short var_15 = (unsigned short)44789;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
