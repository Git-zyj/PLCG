#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7685;
_Bool var_5 = (_Bool)1;
long long int var_6 = -2426440591327788349LL;
unsigned long long int var_7 = 7848050723038644117ULL;
long long int var_10 = -84674422059147714LL;
unsigned char var_11 = (unsigned char)127;
short var_13 = (short)28899;
unsigned short var_14 = (unsigned short)31699;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)102;
int zero = 0;
long long int var_18 = 4926020620820775922LL;
unsigned long long int var_19 = 4284293529823114543ULL;
void init() {
}

void checksum() {
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
