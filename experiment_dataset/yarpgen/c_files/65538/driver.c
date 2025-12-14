#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-78;
long long int var_1 = 1406649584520541617LL;
_Bool var_6 = (_Bool)0;
short var_11 = (short)-15709;
long long int var_12 = 3061268264168047384LL;
long long int var_14 = 6384527797823797579LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)33518;
int var_19 = -291794412;
signed char var_20 = (signed char)-44;
void init() {
}

void checksum() {
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
