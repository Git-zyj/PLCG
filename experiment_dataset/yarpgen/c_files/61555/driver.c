#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)2;
signed char var_3 = (signed char)-38;
unsigned char var_4 = (unsigned char)84;
unsigned char var_5 = (unsigned char)234;
short var_7 = (short)31709;
short var_13 = (short)26065;
unsigned short var_14 = (unsigned short)34235;
unsigned short var_16 = (unsigned short)15690;
int zero = 0;
long long int var_17 = -4211372583284038019LL;
unsigned char var_18 = (unsigned char)133;
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
