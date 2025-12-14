#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1161253439;
int var_3 = -1110368881;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-16;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)54;
_Bool var_11 = (_Bool)1;
short var_12 = (short)12129;
int zero = 0;
signed char var_16 = (signed char)-73;
int var_17 = -1378586214;
short var_18 = (short)1757;
void init() {
}

void checksum() {
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
