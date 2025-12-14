#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)68;
unsigned long long int var_6 = 2983874520023473148ULL;
int var_8 = 739117728;
short var_10 = (short)-19125;
_Bool var_13 = (_Bool)0;
int var_14 = -1077512961;
long long int var_16 = -4627898302620825343LL;
unsigned long long int var_17 = 13801867811059332538ULL;
int zero = 0;
signed char var_19 = (signed char)-64;
unsigned char var_20 = (unsigned char)134;
int var_21 = -81825350;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
