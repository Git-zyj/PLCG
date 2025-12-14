#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30506;
unsigned char var_4 = (unsigned char)215;
unsigned short var_5 = (unsigned short)28780;
short var_7 = (short)32574;
int var_8 = -1421776305;
long long int var_9 = -796578118137437921LL;
unsigned long long int var_11 = 9033508862675059804ULL;
signed char var_14 = (signed char)20;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)248;
short var_17 = (short)12231;
long long int var_18 = 4155249201258796228LL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)179;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
