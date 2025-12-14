#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)-6829;
long long int var_5 = -3743366721204548329LL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)242;
long long int var_10 = -600519735286360116LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 7037773444797300703ULL;
unsigned short var_15 = (unsigned short)2694;
void init() {
}

void checksum() {
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
