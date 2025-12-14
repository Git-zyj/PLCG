#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 154592912;
unsigned int var_2 = 1869638117U;
unsigned short var_3 = (unsigned short)27029;
unsigned short var_6 = (unsigned short)17161;
unsigned char var_10 = (unsigned char)88;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)107;
int var_16 = 458131344;
unsigned short var_17 = (unsigned short)41542;
int var_18 = -1229855740;
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
