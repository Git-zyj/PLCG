#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3123136946843414320LL;
unsigned short var_2 = (unsigned short)2232;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1453689982U;
short var_10 = (short)-20422;
unsigned short var_12 = (unsigned short)45775;
unsigned char var_14 = (unsigned char)182;
long long int var_15 = -3913194681957525829LL;
int zero = 0;
unsigned short var_17 = (unsigned short)58211;
signed char var_18 = (signed char)104;
unsigned char var_19 = (unsigned char)251;
unsigned short var_20 = (unsigned short)5937;
unsigned int var_21 = 3818712884U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
