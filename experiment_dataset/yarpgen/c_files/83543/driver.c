#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)27054;
short var_5 = (short)6450;
unsigned int var_6 = 1493045944U;
unsigned short var_8 = (unsigned short)39749;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)110;
unsigned short var_17 = (unsigned short)27876;
long long int var_19 = -4529047520106119761LL;
int zero = 0;
unsigned char var_20 = (unsigned char)36;
unsigned char var_21 = (unsigned char)182;
unsigned short var_22 = (unsigned short)41025;
unsigned char var_23 = (unsigned char)109;
int var_24 = 392502312;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
