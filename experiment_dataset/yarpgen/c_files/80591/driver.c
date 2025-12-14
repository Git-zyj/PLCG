#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)59622;
unsigned char var_3 = (unsigned char)164;
unsigned int var_5 = 816598640U;
unsigned int var_6 = 4039182943U;
int var_8 = -1664010739;
signed char var_9 = (signed char)-117;
long long int var_10 = -6182642914001176527LL;
long long int var_11 = -9055083805650500036LL;
unsigned long long int var_12 = 8947020830474789922ULL;
unsigned int var_13 = 3945284569U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2970710441U;
long long int var_16 = -3752629229223610196LL;
long long int var_17 = 7429151790622886370LL;
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
