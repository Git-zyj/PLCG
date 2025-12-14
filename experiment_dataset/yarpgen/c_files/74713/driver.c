#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38329;
unsigned short var_3 = (unsigned short)35683;
unsigned short var_4 = (unsigned short)47354;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int var_10 = -1176762939;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_17 = -2256091238039042329LL;
unsigned short var_18 = (unsigned short)33896;
unsigned short var_19 = (unsigned short)33173;
unsigned short var_20 = (unsigned short)8002;
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
