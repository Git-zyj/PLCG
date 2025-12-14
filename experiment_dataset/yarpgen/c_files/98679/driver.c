#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14304149136600811806ULL;
unsigned short var_2 = (unsigned short)13247;
short var_6 = (short)6055;
short var_7 = (short)28002;
long long int var_11 = -1078004650368517006LL;
signed char var_12 = (signed char)-47;
short var_13 = (short)-30883;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 253166685U;
unsigned char var_16 = (unsigned char)172;
int zero = 0;
signed char var_17 = (signed char)72;
unsigned short var_18 = (unsigned short)48024;
void init() {
}

void checksum() {
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
