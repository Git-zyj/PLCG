#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3759;
unsigned long long int var_3 = 16517580077831712569ULL;
_Bool var_5 = (_Bool)1;
int var_6 = 650635024;
long long int var_7 = 7235618221410294257LL;
unsigned short var_10 = (unsigned short)8224;
long long int var_12 = 4511971919158177050LL;
unsigned long long int var_13 = 10942480408540524325ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)28396;
unsigned short var_16 = (unsigned short)60887;
unsigned char var_17 = (unsigned char)88;
void init() {
}

void checksum() {
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
