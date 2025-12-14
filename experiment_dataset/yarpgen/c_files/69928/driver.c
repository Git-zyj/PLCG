#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5766759383204911268LL;
unsigned char var_4 = (unsigned char)232;
unsigned int var_6 = 3118760928U;
int zero = 0;
unsigned short var_13 = (unsigned short)63786;
unsigned int var_14 = 1781212541U;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-6622;
unsigned char var_17 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
