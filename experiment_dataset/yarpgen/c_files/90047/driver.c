#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46849;
unsigned int var_1 = 3839073631U;
int var_3 = -660539008;
int var_4 = 29069957;
unsigned int var_8 = 692547929U;
unsigned int var_10 = 2121301969U;
int var_11 = 1863962332;
signed char var_12 = (signed char)-63;
signed char var_14 = (signed char)83;
int var_15 = -1939510614;
int var_17 = -1637180527;
int zero = 0;
int var_18 = 1077417900;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)49;
unsigned char var_21 = (unsigned char)91;
int var_22 = -1293655901;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
