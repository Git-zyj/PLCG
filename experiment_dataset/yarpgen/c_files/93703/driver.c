#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 643829612;
unsigned char var_2 = (unsigned char)180;
unsigned long long int var_3 = 12094063056696356780ULL;
unsigned char var_4 = (unsigned char)47;
unsigned char var_5 = (unsigned char)170;
unsigned int var_6 = 2826377555U;
int var_7 = -953094076;
unsigned short var_8 = (unsigned short)668;
unsigned short var_9 = (unsigned short)54431;
int var_10 = 1241282419;
int zero = 0;
short var_11 = (short)-15187;
short var_12 = (short)26696;
unsigned short var_13 = (unsigned short)49976;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
