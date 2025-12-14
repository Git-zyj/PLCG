#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)80;
short var_3 = (short)-21514;
unsigned long long int var_4 = 12545351400323015554ULL;
unsigned short var_5 = (unsigned short)60511;
unsigned int var_7 = 2678593575U;
unsigned short var_11 = (unsigned short)60005;
unsigned int var_13 = 1118068928U;
int zero = 0;
signed char var_14 = (signed char)-75;
int var_15 = -1206248751;
_Bool var_16 = (_Bool)1;
short var_17 = (short)654;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
