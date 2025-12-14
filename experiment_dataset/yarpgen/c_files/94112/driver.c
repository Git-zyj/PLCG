#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)75;
long long int var_4 = -7539092245631862519LL;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-12311;
signed char var_11 = (signed char)-6;
unsigned char var_12 = (unsigned char)218;
long long int var_13 = 3778037176836982932LL;
int zero = 0;
unsigned int var_15 = 1764192213U;
unsigned short var_16 = (unsigned short)28551;
int var_17 = -478861509;
unsigned char var_18 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
