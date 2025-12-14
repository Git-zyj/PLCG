#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1194723967;
unsigned short var_1 = (unsigned short)11769;
unsigned int var_2 = 1609522719U;
_Bool var_4 = (_Bool)0;
int var_6 = -919488928;
unsigned char var_8 = (unsigned char)181;
short var_9 = (short)-30259;
int zero = 0;
signed char var_10 = (signed char)36;
unsigned short var_11 = (unsigned short)30626;
unsigned char var_12 = (unsigned char)18;
int var_13 = -544699792;
long long int var_14 = 7057536522265329135LL;
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
