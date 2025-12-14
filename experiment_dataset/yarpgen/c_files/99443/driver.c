#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)82;
unsigned short var_9 = (unsigned short)53010;
short var_10 = (short)31323;
unsigned short var_11 = (unsigned short)5443;
unsigned char var_12 = (unsigned char)214;
signed char var_13 = (signed char)5;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_15 = -800692576;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2176351572U;
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
