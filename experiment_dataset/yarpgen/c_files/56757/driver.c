#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8051;
unsigned int var_1 = 392932449U;
unsigned long long int var_2 = 5220899482066230630ULL;
short var_3 = (short)12924;
unsigned short var_7 = (unsigned short)7674;
unsigned short var_10 = (unsigned short)47529;
unsigned short var_11 = (unsigned short)3515;
unsigned short var_15 = (unsigned short)63433;
int zero = 0;
unsigned int var_16 = 2130512619U;
short var_17 = (short)-20919;
void init() {
}

void checksum() {
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
