#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 136951127582446359ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3178728610U;
unsigned short var_10 = (unsigned short)24285;
_Bool var_11 = (_Bool)1;
int var_13 = -487995680;
int zero = 0;
unsigned long long int var_14 = 17144124098812936092ULL;
unsigned int var_15 = 1512965743U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
