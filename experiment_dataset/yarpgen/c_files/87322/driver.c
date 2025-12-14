#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3764782195U;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)31;
unsigned int var_3 = 171229079U;
unsigned char var_4 = (unsigned char)199;
unsigned char var_5 = (unsigned char)222;
unsigned char var_6 = (unsigned char)34;
short var_7 = (short)-7974;
short var_8 = (short)-20735;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)35;
int var_12 = 887355753;
unsigned short var_13 = (unsigned short)27836;
unsigned char var_14 = (unsigned char)150;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
