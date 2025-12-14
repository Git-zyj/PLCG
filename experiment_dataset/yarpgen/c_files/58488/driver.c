#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28200;
int var_2 = 1562325801;
unsigned int var_3 = 99161311U;
unsigned long long int var_5 = 9376942561699547275ULL;
unsigned short var_8 = (unsigned short)59328;
long long int var_9 = 338845195886558043LL;
short var_12 = (short)15016;
int zero = 0;
unsigned long long int var_15 = 13418373157077915849ULL;
int var_16 = -592697879;
int var_17 = -1048708487;
unsigned int var_18 = 1163225268U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
