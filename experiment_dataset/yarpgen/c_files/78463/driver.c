#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 11352277817679419878ULL;
unsigned int var_6 = 2035838803U;
short var_7 = (short)-31466;
unsigned char var_8 = (unsigned char)100;
unsigned int var_9 = 4283451442U;
_Bool var_10 = (_Bool)1;
long long int var_11 = -59940802585723768LL;
signed char var_12 = (signed char)38;
long long int var_13 = 2209553266973151107LL;
unsigned int var_14 = 3995054203U;
unsigned int var_16 = 240543747U;
int zero = 0;
unsigned int var_17 = 3689557205U;
unsigned int var_18 = 854697475U;
long long int var_19 = 7385183528290650333LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
