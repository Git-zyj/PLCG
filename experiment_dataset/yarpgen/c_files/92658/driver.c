#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)93;
long long int var_5 = 7878043141750578253LL;
short var_6 = (short)26221;
signed char var_12 = (signed char)19;
unsigned short var_13 = (unsigned short)41560;
_Bool var_14 = (_Bool)0;
signed char var_16 = (signed char)6;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)48312;
long long int var_21 = 6037850244173611778LL;
unsigned short var_22 = (unsigned short)621;
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
