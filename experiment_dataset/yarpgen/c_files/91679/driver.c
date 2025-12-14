#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3962845687567053341ULL;
unsigned int var_1 = 3937059211U;
unsigned short var_3 = (unsigned short)729;
short var_6 = (short)-1583;
unsigned short var_8 = (unsigned short)20870;
signed char var_9 = (signed char)-66;
int zero = 0;
int var_10 = -339829061;
unsigned short var_11 = (unsigned short)54899;
int var_12 = -897689444;
short var_13 = (short)6822;
short var_14 = (short)29083;
unsigned short var_15 = (unsigned short)6065;
int var_16 = 550374642;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
