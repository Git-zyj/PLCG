#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
long long int var_1 = -4412638024313150621LL;
unsigned char var_2 = (unsigned char)129;
unsigned int var_4 = 3123636596U;
long long int var_5 = -1465794743901460161LL;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)128;
signed char var_13 = (signed char)-102;
int zero = 0;
unsigned char var_14 = (unsigned char)49;
unsigned short var_15 = (unsigned short)442;
void init() {
}

void checksum() {
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
