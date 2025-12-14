#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
short var_1 = (short)23606;
signed char var_2 = (signed char)3;
signed char var_5 = (signed char)46;
short var_7 = (short)19357;
unsigned char var_8 = (unsigned char)217;
signed char var_10 = (signed char)-92;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -1142820332;
int var_16 = 293681247;
void init() {
}

void checksum() {
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
