#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1280372140;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)1;
int var_3 = -403574600;
unsigned int var_5 = 4153708018U;
unsigned int var_6 = 2186670216U;
unsigned char var_7 = (unsigned char)201;
unsigned int var_8 = 4044231536U;
int zero = 0;
short var_10 = (short)680;
unsigned int var_11 = 1263636684U;
unsigned int var_12 = 3261518804U;
signed char var_13 = (signed char)110;
unsigned char var_14 = (unsigned char)215;
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
