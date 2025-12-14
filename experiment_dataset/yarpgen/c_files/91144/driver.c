#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1998095768182833499LL;
int var_1 = -749168161;
long long int var_2 = -7945595804727557062LL;
int var_3 = -204088498;
unsigned long long int var_5 = 1435192713560384411ULL;
unsigned int var_6 = 190674974U;
unsigned short var_8 = (unsigned short)18211;
unsigned long long int var_9 = 18322210774690694905ULL;
int var_10 = 447915179;
unsigned int var_11 = 2903604636U;
int zero = 0;
unsigned short var_12 = (unsigned short)18365;
unsigned char var_13 = (unsigned char)243;
int var_14 = -1006047873;
long long int var_15 = -6828056988960074959LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
