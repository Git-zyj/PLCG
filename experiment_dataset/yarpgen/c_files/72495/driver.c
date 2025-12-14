#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-4951;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)3149;
unsigned char var_5 = (unsigned char)200;
short var_6 = (short)-24062;
unsigned long long int var_7 = 7035299577190310717ULL;
unsigned char var_9 = (unsigned char)246;
unsigned long long int var_11 = 16669238875901572751ULL;
unsigned short var_12 = (unsigned short)46157;
short var_13 = (short)-6071;
int zero = 0;
unsigned long long int var_14 = 17640770335267614460ULL;
short var_15 = (short)-18661;
unsigned int var_16 = 245739223U;
unsigned short var_17 = (unsigned short)54061;
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
