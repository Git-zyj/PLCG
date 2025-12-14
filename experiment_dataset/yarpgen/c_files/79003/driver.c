#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)26468;
unsigned char var_6 = (unsigned char)240;
unsigned char var_7 = (unsigned char)109;
int var_10 = 1093243736;
unsigned char var_11 = (unsigned char)218;
int zero = 0;
unsigned char var_12 = (unsigned char)220;
short var_13 = (short)10928;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
