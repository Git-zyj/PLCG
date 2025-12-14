#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)727;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-3143;
signed char var_11 = (signed char)30;
unsigned long long int var_12 = 267635040891317871ULL;
unsigned short var_13 = (unsigned short)44775;
short var_14 = (short)25392;
int var_16 = 1377578108;
_Bool var_17 = (_Bool)0;
int var_19 = 1475017088;
int zero = 0;
long long int var_20 = -6354496666576104576LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = 1286272543063952093LL;
void init() {
}

void checksum() {
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
