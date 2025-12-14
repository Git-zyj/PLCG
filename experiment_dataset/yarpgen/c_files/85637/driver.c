#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5159093643116698613LL;
long long int var_7 = 2509820960214795414LL;
_Bool var_11 = (_Bool)0;
long long int var_12 = -8059847576520399327LL;
signed char var_14 = (signed char)-82;
unsigned char var_15 = (unsigned char)133;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)1;
unsigned short var_19 = (unsigned short)46617;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)172;
int var_22 = -843440904;
unsigned int var_23 = 731786950U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
