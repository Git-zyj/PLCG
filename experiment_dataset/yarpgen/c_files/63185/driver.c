#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)140;
long long int var_3 = 8696551129652165397LL;
int var_6 = 2029293849;
unsigned long long int var_7 = 11439528536346079506ULL;
signed char var_8 = (signed char)-23;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)36983;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1659459251U;
unsigned char var_13 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
