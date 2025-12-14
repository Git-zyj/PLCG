#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -9028315696903222364LL;
unsigned short var_7 = (unsigned short)6408;
unsigned long long int var_8 = 4968303277889899488ULL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)133;
unsigned int var_16 = 1027658733U;
int zero = 0;
short var_20 = (short)-15728;
unsigned short var_21 = (unsigned short)1706;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
