#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27903;
_Bool var_2 = (_Bool)0;
unsigned int var_5 = 46168691U;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1957377058U;
short var_13 = (short)-6950;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)392;
unsigned short var_18 = (unsigned short)35616;
long long int var_19 = -6594666771616931538LL;
int zero = 0;
short var_20 = (short)-12156;
short var_21 = (short)20807;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
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
