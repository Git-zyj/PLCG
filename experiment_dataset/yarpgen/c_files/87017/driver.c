#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
short var_5 = (short)18903;
long long int var_10 = -8373469968000820705LL;
long long int var_11 = -7177149901900263231LL;
signed char var_12 = (signed char)9;
short var_14 = (short)-3328;
int zero = 0;
signed char var_15 = (signed char)68;
unsigned long long int var_16 = 2607345950696775057ULL;
short var_17 = (short)1733;
signed char var_18 = (signed char)86;
signed char var_19 = (signed char)101;
unsigned long long int arr_0 [24] ;
int arr_3 [24] ;
signed char arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 8224504644172789798ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 526201840;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-111 : (signed char)-16;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
