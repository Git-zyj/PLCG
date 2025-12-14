#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2488616550374218849LL;
unsigned char var_1 = (unsigned char)179;
_Bool var_2 = (_Bool)1;
short var_3 = (short)22318;
unsigned int var_4 = 1499551450U;
signed char var_5 = (signed char)52;
unsigned short var_6 = (unsigned short)45687;
unsigned long long int var_10 = 9661307711219284306ULL;
int zero = 0;
short var_14 = (short)-22964;
unsigned int var_15 = 3120997149U;
unsigned char var_16 = (unsigned char)101;
int var_17 = -1195584103;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
