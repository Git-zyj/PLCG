#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-123;
long long int var_5 = 7603223809525628742LL;
unsigned short var_10 = (unsigned short)34324;
unsigned short var_12 = (unsigned short)42336;
int zero = 0;
unsigned char var_13 = (unsigned char)1;
short var_14 = (short)15080;
signed char var_15 = (signed char)109;
_Bool var_16 = (_Bool)1;
short var_17 = (short)20957;
long long int var_18 = -8571410442621745461LL;
unsigned char arr_2 [24] ;
signed char arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-31 : (signed char)2;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
