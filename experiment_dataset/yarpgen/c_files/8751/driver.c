#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 34715455U;
unsigned long long int var_5 = 6670802048622958452ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)9572;
long long int var_11 = 9190858249205549778LL;
short var_12 = (short)17324;
unsigned char var_13 = (unsigned char)114;
_Bool var_14 = (_Bool)0;
signed char var_16 = (signed char)85;
unsigned char var_17 = (unsigned char)134;
int zero = 0;
signed char var_19 = (signed char)80;
unsigned long long int var_20 = 2896627562489344058ULL;
void init() {
}

void checksum() {
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
