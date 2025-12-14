#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1948471592U;
unsigned int var_8 = 1550998754U;
short var_9 = (short)-13774;
long long int var_10 = -1991273555286334032LL;
int var_12 = 1960194;
unsigned int var_17 = 3639461307U;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 2236527285314126785ULL;
int zero = 0;
unsigned long long int var_20 = 5748552054282020656ULL;
unsigned int var_21 = 1925764535U;
short var_22 = (short)-7067;
unsigned char var_23 = (unsigned char)16;
unsigned short var_24 = (unsigned short)59498;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
