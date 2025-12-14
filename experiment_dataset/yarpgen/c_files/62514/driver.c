#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62802;
unsigned int var_1 = 2279480424U;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1273372821U;
unsigned int var_5 = 3071391227U;
unsigned char var_6 = (unsigned char)105;
unsigned short var_7 = (unsigned short)2672;
unsigned short var_8 = (unsigned short)47648;
unsigned short var_9 = (unsigned short)71;
int zero = 0;
unsigned char var_10 = (unsigned char)167;
unsigned char var_11 = (unsigned char)66;
int var_12 = -668778001;
unsigned char var_13 = (unsigned char)235;
unsigned char var_14 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
