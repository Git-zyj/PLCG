#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1359056565U;
unsigned short var_3 = (unsigned short)20527;
short var_4 = (short)25464;
int var_5 = 1643070356;
int var_6 = -397614844;
long long int var_7 = 295537050167615147LL;
short var_10 = (short)-7364;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-15348;
int zero = 0;
signed char var_13 = (signed char)54;
short var_14 = (short)-24318;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
