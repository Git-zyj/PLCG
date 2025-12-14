#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11812;
short var_1 = (short)-6104;
unsigned long long int var_2 = 8460342282583675064ULL;
unsigned long long int var_3 = 4934531545899732015ULL;
unsigned long long int var_4 = 3248632085329791658ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)42;
int zero = 0;
unsigned int var_12 = 2071719895U;
unsigned long long int var_13 = 14389994332696516233ULL;
unsigned short var_14 = (unsigned short)12191;
void init() {
}

void checksum() {
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
