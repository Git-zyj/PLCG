#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7265932244199821538LL;
short var_1 = (short)-15715;
long long int var_2 = 7249718492186877508LL;
signed char var_3 = (signed char)-28;
unsigned char var_4 = (unsigned char)77;
int var_5 = 1686754935;
unsigned char var_6 = (unsigned char)40;
unsigned char var_7 = (unsigned char)211;
long long int var_8 = -1299468062936236801LL;
unsigned int var_9 = 3061181297U;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 1278208423U;
unsigned short var_14 = (unsigned short)48035;
unsigned char var_15 = (unsigned char)46;
int zero = 0;
unsigned short var_16 = (unsigned short)52718;
long long int var_17 = -8071818408202229995LL;
unsigned char var_18 = (unsigned char)83;
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
