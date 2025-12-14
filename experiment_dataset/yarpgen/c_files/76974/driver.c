#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40868;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 5936255224683161059ULL;
long long int var_5 = 7365816458838828026LL;
int var_6 = -1569159130;
signed char var_10 = (signed char)2;
unsigned char var_13 = (unsigned char)53;
int zero = 0;
unsigned short var_16 = (unsigned short)17945;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)152;
void init() {
}

void checksum() {
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
