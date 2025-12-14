#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
unsigned int var_2 = 2420920780U;
unsigned short var_3 = (unsigned short)21324;
long long int var_6 = -7735582587401898215LL;
_Bool var_7 = (_Bool)0;
unsigned char var_12 = (unsigned char)40;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_17 = 5037817454885599352LL;
unsigned long long int var_18 = 14163108607340716097ULL;
short var_19 = (short)1393;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
