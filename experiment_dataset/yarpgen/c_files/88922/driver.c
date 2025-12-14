#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9595849000983839007ULL;
_Bool var_3 = (_Bool)1;
long long int var_4 = -6347422632820881355LL;
unsigned int var_7 = 3348434059U;
long long int var_8 = -9136402798275179634LL;
unsigned char var_13 = (unsigned char)7;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 154833210275771996LL;
int var_18 = 2107680223;
unsigned long long int var_19 = 5744338986730472603ULL;
int var_20 = 132395679;
unsigned long long int var_21 = 13229984685799219598ULL;
unsigned char var_22 = (unsigned char)217;
unsigned char var_23 = (unsigned char)0;
short arr_0 [20] [20] ;
unsigned short arr_1 [20] ;
int arr_2 [20] [20] ;
_Bool arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (short)21433;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)45978;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 1849754849;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
