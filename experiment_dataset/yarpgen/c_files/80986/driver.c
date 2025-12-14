#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25089;
unsigned int var_1 = 3323726049U;
short var_2 = (short)8470;
unsigned long long int var_3 = 13363041232167821924ULL;
_Bool var_4 = (_Bool)1;
long long int var_5 = -1373322437711444918LL;
unsigned int var_6 = 2114889012U;
int var_7 = 1890816893;
unsigned char var_9 = (unsigned char)164;
unsigned char var_10 = (unsigned char)18;
unsigned int var_12 = 1869435167U;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int var_15 = -1097695136;
unsigned int var_16 = 387131391U;
unsigned long long int var_17 = 9665539790234837181ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = 99718837;
unsigned int var_20 = 2254410216U;
unsigned int var_21 = 2548087176U;
signed char var_22 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
