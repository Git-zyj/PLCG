#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-21170;
unsigned int var_2 = 2845891301U;
long long int var_3 = -890753189683409556LL;
short var_4 = (short)-5502;
short var_5 = (short)-15082;
short var_6 = (short)25353;
unsigned long long int var_8 = 2846166600537496627ULL;
long long int var_9 = 974668133178605543LL;
unsigned long long int var_10 = 6067959612763019372ULL;
signed char var_11 = (signed char)-69;
long long int var_12 = -9096553144223528031LL;
signed char var_15 = (signed char)-81;
int zero = 0;
unsigned long long int var_16 = 8371842779756335592ULL;
unsigned short var_17 = (unsigned short)27409;
short var_18 = (short)-30983;
unsigned char var_19 = (unsigned char)144;
int var_20 = 1907380160;
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
