#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12314232345212094033ULL;
int var_3 = 899205075;
unsigned char var_6 = (unsigned char)11;
unsigned short var_7 = (unsigned short)7241;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-32621;
unsigned short var_13 = (unsigned short)8971;
unsigned int var_14 = 4222311957U;
int zero = 0;
unsigned long long int var_16 = 4801682445384480979ULL;
unsigned long long int var_17 = 9113369825452848451ULL;
unsigned int var_18 = 1313899070U;
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
