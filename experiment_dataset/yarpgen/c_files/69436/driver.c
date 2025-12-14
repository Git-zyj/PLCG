#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 279977353;
signed char var_1 = (signed char)30;
unsigned short var_2 = (unsigned short)10125;
signed char var_3 = (signed char)-114;
unsigned short var_10 = (unsigned short)58814;
int var_12 = 1599493870;
unsigned int var_13 = 3901015706U;
unsigned long long int var_14 = 16679522136317608228ULL;
short var_15 = (short)-28393;
int zero = 0;
int var_16 = -139881201;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)82;
void init() {
}

void checksum() {
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
