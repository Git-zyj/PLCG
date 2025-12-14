#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 22362815U;
long long int var_1 = -5129217094568779123LL;
unsigned int var_2 = 3194199110U;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)37;
short var_6 = (short)32575;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-18;
signed char var_10 = (signed char)-73;
unsigned short var_13 = (unsigned short)53004;
int zero = 0;
short var_14 = (short)32364;
unsigned char var_15 = (unsigned char)175;
unsigned short var_16 = (unsigned short)46767;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
