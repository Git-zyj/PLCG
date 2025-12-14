#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18161;
int var_2 = -269595182;
signed char var_3 = (signed char)-43;
unsigned int var_5 = 1658323294U;
short var_6 = (short)9358;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)63062;
short var_10 = (short)-12623;
unsigned char var_12 = (unsigned char)253;
unsigned char var_15 = (unsigned char)242;
int zero = 0;
signed char var_16 = (signed char)-14;
long long int var_17 = 8658475990884491834LL;
unsigned short var_18 = (unsigned short)8876;
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
