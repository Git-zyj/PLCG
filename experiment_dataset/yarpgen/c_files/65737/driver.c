#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
long long int var_1 = -4566326719334467157LL;
long long int var_2 = -7207290927533513070LL;
short var_3 = (short)-8761;
short var_4 = (short)9956;
unsigned short var_5 = (unsigned short)54101;
unsigned int var_6 = 42610516U;
long long int var_7 = 5748261367281462891LL;
unsigned char var_8 = (unsigned char)9;
long long int var_9 = -1449260795453885728LL;
unsigned int var_11 = 281983628U;
int zero = 0;
unsigned short var_12 = (unsigned short)10188;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
