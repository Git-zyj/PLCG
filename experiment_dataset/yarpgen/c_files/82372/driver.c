#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4168177862U;
long long int var_3 = 1791009524354575049LL;
unsigned char var_4 = (unsigned char)242;
unsigned int var_5 = 1127618027U;
signed char var_8 = (signed char)111;
_Bool var_9 = (_Bool)0;
long long int var_10 = -7252048258394386223LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_13 = -2041471791;
unsigned int var_14 = 384279504U;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)85;
signed char var_17 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
