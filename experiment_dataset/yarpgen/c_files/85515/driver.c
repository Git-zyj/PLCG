#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
unsigned int var_4 = 2793960791U;
unsigned char var_5 = (unsigned char)14;
int var_6 = -1985783875;
int var_7 = 51545048;
signed char var_8 = (signed char)-3;
unsigned long long int var_9 = 537696172737824333ULL;
_Bool var_12 = (_Bool)0;
int var_13 = 1819032427;
int zero = 0;
unsigned long long int var_16 = 9770377905738835297ULL;
signed char var_17 = (signed char)96;
int var_18 = 477158203;
int var_19 = -232848507;
_Bool var_20 = (_Bool)0;
int var_21 = -319760181;
short var_22 = (short)-31396;
int var_23 = -1770961868;
unsigned short var_24 = (unsigned short)56356;
unsigned int var_25 = 4206493510U;
unsigned char var_26 = (unsigned char)29;
unsigned int var_27 = 58715121U;
signed char var_28 = (signed char)90;
_Bool var_29 = (_Bool)0;
int var_30 = 473969103;
unsigned short var_31 = (unsigned short)44730;
short var_32 = (short)22702;
unsigned char var_33 = (unsigned char)229;
short arr_1 [16] ;
unsigned char arr_2 [16] [16] ;
unsigned int arr_3 [16] ;
long long int arr_4 [16] ;
unsigned char arr_5 [16] ;
_Bool arr_6 [16] [16] ;
int arr_8 [16] [16] [16] ;
unsigned short arr_10 [16] [16] [16] [16] [16] [16] ;
_Bool arr_12 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-18481;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 712516871U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 7622033995507465888LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -176134856;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)51525;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
