#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-87;
signed char var_6 = (signed char)-122;
_Bool var_8 = (_Bool)0;
short var_10 = (short)24036;
unsigned short var_14 = (unsigned short)61981;
unsigned int var_15 = 3736258657U;
int zero = 0;
unsigned long long int var_20 = 14804654556249847605ULL;
unsigned int var_21 = 2010293380U;
signed char var_22 = (signed char)-15;
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
