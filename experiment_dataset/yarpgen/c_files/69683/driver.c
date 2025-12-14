#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 887525614;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)89;
unsigned int var_10 = 2163734328U;
short var_11 = (short)-7458;
unsigned int var_13 = 3429302532U;
unsigned int var_14 = 4226909765U;
int var_15 = -572655575;
unsigned short var_16 = (unsigned short)19347;
int zero = 0;
short var_17 = (short)10948;
short var_18 = (short)-13452;
int var_19 = 1486775633;
short var_20 = (short)10960;
unsigned short var_21 = (unsigned short)16310;
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
