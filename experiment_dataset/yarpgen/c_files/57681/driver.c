#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)93;
int var_2 = -1091372823;
short var_5 = (short)-3902;
unsigned long long int var_6 = 278884621978630396ULL;
unsigned char var_7 = (unsigned char)218;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 158522937U;
unsigned int var_11 = 1786134460U;
int zero = 0;
unsigned short var_13 = (unsigned short)34280;
unsigned int var_14 = 3969387849U;
int var_15 = -1749063498;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
