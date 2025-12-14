#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)10;
int var_6 = 1954934454;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-19835;
short var_12 = (short)-23772;
_Bool var_14 = (_Bool)0;
signed char var_16 = (signed char)112;
int zero = 0;
short var_17 = (short)12790;
unsigned char var_18 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
