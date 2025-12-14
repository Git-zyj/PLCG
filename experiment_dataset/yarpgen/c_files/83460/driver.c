#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12482246060973782958ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_12 = (unsigned char)170;
long long int var_13 = 6440957923210094196LL;
int zero = 0;
unsigned char var_14 = (unsigned char)114;
unsigned short var_15 = (unsigned short)47384;
short var_16 = (short)-16500;
long long int var_17 = -1701150329034871019LL;
_Bool var_18 = (_Bool)1;
unsigned int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 4071520460U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
