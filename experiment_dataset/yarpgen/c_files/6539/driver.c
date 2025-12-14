#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1710390442649947913LL;
_Bool var_3 = (_Bool)0;
short var_5 = (short)6630;
unsigned int var_6 = 1732886050U;
unsigned long long int var_8 = 3600856182341474874ULL;
short var_10 = (short)24538;
unsigned int var_11 = 673008096U;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3060112302U;
unsigned char var_15 = (unsigned char)90;
short var_16 = (short)-21966;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -6262109127318165732LL;
unsigned int var_19 = 3508790249U;
_Bool var_20 = (_Bool)1;
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
