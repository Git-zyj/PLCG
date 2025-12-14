#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10528;
long long int var_1 = 7213575661115383708LL;
unsigned int var_2 = 2094626956U;
unsigned char var_3 = (unsigned char)48;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 583255929U;
int var_6 = -778436614;
long long int var_7 = -5883806081765387318LL;
long long int var_8 = -5882524487734686255LL;
unsigned short var_9 = (unsigned short)31174;
unsigned int var_10 = 1262038419U;
int zero = 0;
long long int var_11 = -7235760897206858988LL;
unsigned char var_12 = (unsigned char)51;
short var_13 = (short)-1830;
unsigned short var_14 = (unsigned short)55318;
short var_15 = (short)-28666;
unsigned long long int var_16 = 9379714206764981693ULL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-23657;
short var_19 = (short)16243;
short var_20 = (short)28250;
unsigned short var_21 = (unsigned short)53255;
unsigned char var_22 = (unsigned char)208;
_Bool var_23 = (_Bool)0;
short var_24 = (short)10346;
signed char var_25 = (signed char)76;
unsigned char var_26 = (unsigned char)164;
short var_27 = (short)-30470;
unsigned short var_28 = (unsigned short)60999;
signed char arr_0 [24] ;
long long int arr_1 [24] ;
short arr_3 [24] [24] [24] ;
signed char arr_4 [24] [24] [24] ;
unsigned int arr_6 [11] ;
unsigned short arr_10 [11] ;
long long int arr_12 [19] ;
unsigned int arr_13 [19] ;
long long int arr_15 [16] [16] ;
short arr_7 [11] ;
_Bool arr_8 [11] ;
int arr_11 [11] ;
long long int arr_17 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -7928015823670795153LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-13235;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 3572361696U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)38529 : (unsigned short)40735;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 4003391901952449420LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = 2973104820U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 1191626756528741223LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (short)19585;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -98844382 : 1634551133;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = -162198189581967015LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
