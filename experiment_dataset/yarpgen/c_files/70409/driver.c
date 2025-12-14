#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2282795535U;
signed char var_3 = (signed char)35;
short var_4 = (short)15184;
unsigned short var_9 = (unsigned short)47378;
signed char var_14 = (signed char)-77;
short var_15 = (short)-669;
unsigned short var_16 = (unsigned short)33229;
int zero = 0;
unsigned int var_20 = 3803701800U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
