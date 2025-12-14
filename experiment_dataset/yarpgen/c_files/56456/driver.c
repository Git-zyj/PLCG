#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5781495948107481087LL;
_Bool var_2 = (_Bool)0;
int var_3 = -725735772;
unsigned char var_6 = (unsigned char)167;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)174;
unsigned char var_11 = (unsigned char)76;
short var_12 = (short)-11009;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 222615116U;
unsigned char var_16 = (unsigned char)135;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-88;
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
