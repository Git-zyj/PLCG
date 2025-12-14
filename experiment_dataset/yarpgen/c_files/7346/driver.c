#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)197;
short var_12 = (short)-11162;
short var_13 = (short)-18256;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 2481449715352215697ULL;
unsigned short var_18 = (unsigned short)1251;
int zero = 0;
short var_19 = (short)28162;
unsigned char var_20 = (unsigned char)204;
long long int var_21 = -7445239725846368850LL;
unsigned char var_22 = (unsigned char)36;
unsigned int var_23 = 3682071423U;
unsigned char var_24 = (unsigned char)100;
unsigned char arr_0 [24] [24] ;
long long int arr_3 [24] [24] ;
unsigned char arr_4 [24] ;
unsigned long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 5238709990647737921LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 14205765656633438471ULL : 6191972490989960822ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
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
