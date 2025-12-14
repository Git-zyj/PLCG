#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -160134288;
signed char var_3 = (signed char)-46;
int var_4 = 1727934740;
unsigned short var_6 = (unsigned short)34575;
unsigned char var_9 = (unsigned char)252;
long long int var_12 = -2120831841920756143LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)13881;
_Bool var_15 = (_Bool)1;
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
