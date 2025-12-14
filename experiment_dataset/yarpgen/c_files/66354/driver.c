#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31005;
short var_2 = (short)-25852;
long long int var_3 = -5363692096308510897LL;
unsigned char var_5 = (unsigned char)246;
short var_6 = (short)26956;
short var_7 = (short)-699;
long long int var_9 = -1699473516259965414LL;
unsigned long long int var_10 = 15519689739519580933ULL;
int zero = 0;
unsigned long long int var_11 = 13214065043134931892ULL;
int var_12 = 72803298;
int var_13 = -180186656;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
