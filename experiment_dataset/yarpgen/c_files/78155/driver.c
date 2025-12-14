#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
long long int var_1 = -6246110188926188261LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 8500013662751449853ULL;
unsigned char var_9 = (unsigned char)184;
_Bool var_12 = (_Bool)0;
short var_14 = (short)3505;
int zero = 0;
unsigned int var_19 = 1754084881U;
unsigned char var_20 = (unsigned char)22;
signed char var_21 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
