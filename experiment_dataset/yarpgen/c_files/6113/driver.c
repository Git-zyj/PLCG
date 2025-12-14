#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4340980600957247903LL;
signed char var_6 = (signed char)5;
_Bool var_7 = (_Bool)0;
short var_8 = (short)32664;
_Bool var_12 = (_Bool)1;
long long int var_13 = -2957943316200863810LL;
short var_15 = (short)-23790;
int var_16 = -1405561709;
int zero = 0;
unsigned short var_19 = (unsigned short)55149;
signed char var_20 = (signed char)-116;
signed char var_21 = (signed char)-63;
unsigned char var_22 = (unsigned char)97;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
