#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6332;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)74;
unsigned short var_8 = (unsigned short)8560;
unsigned char var_9 = (unsigned char)220;
short var_10 = (short)22289;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_16 = -127142223;
int var_17 = 742537288;
long long int var_18 = -8120158290839174276LL;
int var_19 = -687930325;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
