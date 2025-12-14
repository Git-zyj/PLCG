#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5423347612098351971ULL;
unsigned short var_3 = (unsigned short)54855;
unsigned int var_4 = 1877930230U;
unsigned long long int var_5 = 12486388373824837033ULL;
unsigned short var_6 = (unsigned short)12421;
unsigned int var_7 = 4021319502U;
short var_8 = (short)-6245;
unsigned short var_10 = (unsigned short)12881;
short var_11 = (short)-11662;
unsigned int var_12 = 3181342764U;
unsigned long long int var_14 = 10114564309642116036ULL;
short var_16 = (short)-9775;
int zero = 0;
short var_17 = (short)20062;
short var_18 = (short)-23315;
int var_19 = -259826896;
int var_20 = -645679181;
unsigned long long int var_21 = 7255847835106395658ULL;
int var_22 = 1198261700;
short var_23 = (short)-5819;
short var_24 = (short)-21694;
long long int var_25 = 6344290613900555612LL;
_Bool var_26 = (_Bool)0;
short var_27 = (short)-29247;
short var_28 = (short)-14902;
unsigned int var_29 = 1306039234U;
short arr_0 [13] ;
short arr_2 [14] ;
short arr_3 [14] ;
int arr_8 [21] [21] ;
unsigned int arr_10 [21] [21] ;
long long int arr_11 [21] [21] ;
unsigned long long int arr_13 [21] ;
int arr_15 [21] [21] [21] ;
unsigned int arr_18 [21] ;
long long int arr_5 [14] ;
short arr_12 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)13017;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-16737;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)7022;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 901599306 : -1600303264;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = 3204892008U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? -7457556256551006019LL : -140713206638910421LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 12450128782908107263ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -2102471904;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 2536919730U : 1993782573U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -8992123708877214916LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)-30380 : (short)-18334;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
