#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 320199524U;
unsigned int var_1 = 2358586636U;
short var_5 = (short)-29943;
_Bool var_7 = (_Bool)1;
long long int var_9 = 5735201011980536447LL;
short var_10 = (short)16814;
int var_11 = 1147253708;
long long int var_13 = -8039079856187629054LL;
unsigned char var_14 = (unsigned char)25;
int zero = 0;
unsigned long long int var_15 = 12520490633405374076ULL;
short var_16 = (short)25037;
unsigned long long int var_17 = 10993510494511972960ULL;
unsigned short var_18 = (unsigned short)48879;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
