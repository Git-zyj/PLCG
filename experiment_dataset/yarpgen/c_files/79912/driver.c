#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1019834495;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 2689441475U;
unsigned int var_4 = 1406625071U;
short var_6 = (short)13547;
short var_7 = (short)-1171;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 17227773707941157163ULL;
signed char var_13 = (signed char)124;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)41058;
unsigned char var_16 = (unsigned char)24;
short var_17 = (short)-470;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
