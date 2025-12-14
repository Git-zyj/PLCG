#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30646;
unsigned char var_2 = (unsigned char)118;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)73;
unsigned int var_9 = 3338399266U;
unsigned int var_11 = 3969058308U;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)19323;
void init() {
}

void checksum() {
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
