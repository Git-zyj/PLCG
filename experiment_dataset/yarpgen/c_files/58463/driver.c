#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)16;
short var_5 = (short)17205;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)66;
long long int var_12 = -3845630317706749116LL;
unsigned short var_15 = (unsigned short)22204;
short var_16 = (short)-27102;
int zero = 0;
long long int var_17 = -7964726986006918426LL;
short var_18 = (short)-1905;
unsigned long long int var_19 = 16600779360540983177ULL;
unsigned long long int var_20 = 12506774186036429060ULL;
unsigned short var_21 = (unsigned short)1091;
unsigned short var_22 = (unsigned short)50737;
signed char var_23 = (signed char)5;
short arr_0 [13] [13] ;
short arr_1 [13] ;
unsigned int arr_2 [13] [13] ;
long long int arr_6 [13] [13] [13] ;
unsigned long long int arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-2882;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)14252;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 2141613469U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -5723971225688979013LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 6461570248556287136ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
