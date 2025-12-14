#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)34;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)14;
_Bool var_8 = (_Bool)0;
int var_12 = -1016685269;
long long int var_14 = -6226385155019237185LL;
long long int var_17 = -3773339827529368499LL;
unsigned short var_19 = (unsigned short)29077;
int zero = 0;
long long int var_20 = 8756348786807281319LL;
signed char var_21 = (signed char)-41;
long long int var_22 = -7705390294985722983LL;
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
