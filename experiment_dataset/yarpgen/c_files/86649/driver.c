#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16203;
signed char var_4 = (signed char)40;
short var_5 = (short)-22309;
unsigned long long int var_6 = 5242304379192229075ULL;
int var_7 = -989580310;
unsigned short var_10 = (unsigned short)40399;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 8306497358501554348ULL;
short var_16 = (short)20056;
int zero = 0;
short var_20 = (short)-16040;
long long int var_21 = 4172893534454679420LL;
unsigned char var_22 = (unsigned char)210;
unsigned short var_23 = (unsigned short)43253;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
