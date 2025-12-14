#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)162;
_Bool var_3 = (_Bool)1;
short var_4 = (short)23016;
_Bool var_7 = (_Bool)0;
short var_13 = (short)31519;
signed char var_14 = (signed char)-119;
unsigned char var_15 = (unsigned char)199;
int zero = 0;
unsigned char var_17 = (unsigned char)22;
unsigned short var_18 = (unsigned short)2955;
long long int var_19 = -1906570303683108323LL;
unsigned char var_20 = (unsigned char)81;
long long int var_21 = 1489813122972056035LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
