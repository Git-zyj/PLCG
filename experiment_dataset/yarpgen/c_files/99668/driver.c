#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)8570;
signed char var_4 = (signed char)-18;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)53426;
unsigned short var_13 = (unsigned short)17935;
unsigned char var_15 = (unsigned char)184;
int zero = 0;
unsigned long long int var_17 = 14604288265029940890ULL;
unsigned char var_18 = (unsigned char)172;
unsigned char var_19 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
