#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 867312541U;
unsigned int var_2 = 4092259499U;
unsigned int var_7 = 1774707100U;
int var_8 = -414777748;
unsigned int var_9 = 3332277083U;
int var_13 = 273440894;
unsigned int var_15 = 3720585057U;
int var_16 = 1452168225;
unsigned int var_17 = 2509080246U;
int var_18 = 352700843;
int zero = 0;
int var_19 = 418009192;
unsigned int var_20 = 1405531560U;
int var_21 = -201223388;
int var_22 = -2144944835;
unsigned int var_23 = 898254745U;
unsigned int var_24 = 1137959897U;
int var_25 = -687914381;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
