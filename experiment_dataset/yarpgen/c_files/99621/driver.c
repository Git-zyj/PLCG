#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57472;
unsigned int var_2 = 3107389226U;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)65026;
unsigned char var_8 = (unsigned char)209;
unsigned char var_9 = (unsigned char)20;
short var_10 = (short)-8128;
unsigned int var_12 = 2912282335U;
int zero = 0;
unsigned char var_14 = (unsigned char)75;
unsigned char var_15 = (unsigned char)228;
unsigned char var_16 = (unsigned char)179;
unsigned char var_17 = (unsigned char)175;
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
