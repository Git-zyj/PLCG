#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2052569415U;
signed char var_2 = (signed char)-91;
unsigned int var_4 = 1715326506U;
unsigned char var_5 = (unsigned char)250;
int var_6 = 52519358;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 7257908559315440487ULL;
unsigned char var_12 = (unsigned char)28;
short var_14 = (short)-4541;
int zero = 0;
unsigned short var_15 = (unsigned short)1999;
unsigned short var_16 = (unsigned short)2992;
unsigned long long int var_17 = 10869244404114341283ULL;
void init() {
}

void checksum() {
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
