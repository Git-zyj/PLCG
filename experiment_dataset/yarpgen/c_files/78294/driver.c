#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 752576875;
_Bool var_3 = (_Bool)0;
unsigned int var_7 = 4207481752U;
unsigned short var_8 = (unsigned short)42330;
int var_10 = 1716551315;
unsigned short var_13 = (unsigned short)55353;
int var_14 = -1328166936;
int zero = 0;
unsigned short var_18 = (unsigned short)52336;
signed char var_19 = (signed char)-45;
short var_20 = (short)11952;
long long int var_21 = -2994526058116539709LL;
signed char var_22 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
