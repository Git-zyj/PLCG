#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-42;
long long int var_3 = -7431819556411498260LL;
_Bool var_5 = (_Bool)1;
unsigned short var_11 = (unsigned short)11902;
int var_15 = -277316719;
short var_16 = (short)-12221;
unsigned int var_17 = 3073261329U;
signed char var_18 = (signed char)-23;
int zero = 0;
unsigned int var_20 = 1750038351U;
int var_21 = 578351764;
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
