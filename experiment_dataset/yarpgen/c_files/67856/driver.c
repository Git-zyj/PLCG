#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1778171108;
unsigned int var_2 = 3275549352U;
int var_4 = -848260535;
unsigned int var_5 = 2925076767U;
int var_7 = 2083549084;
unsigned long long int var_11 = 14828561317765658132ULL;
unsigned char var_13 = (unsigned char)52;
unsigned int var_14 = 2609068904U;
long long int var_15 = -913604524203715564LL;
int zero = 0;
signed char var_16 = (signed char)-78;
_Bool var_17 = (_Bool)0;
int var_18 = 1948692581;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-92;
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
