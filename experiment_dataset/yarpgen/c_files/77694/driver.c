#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
int var_2 = 775257334;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 6889580583294188270ULL;
unsigned char var_7 = (unsigned char)201;
short var_8 = (short)20996;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 703570725U;
short var_12 = (short)-9979;
unsigned short var_13 = (unsigned short)20781;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
