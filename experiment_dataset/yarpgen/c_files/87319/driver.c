#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1894265210;
signed char var_5 = (signed char)-38;
unsigned long long int var_11 = 7503584193193603801ULL;
int zero = 0;
int var_17 = -1629635019;
long long int var_18 = -1036731939630636536LL;
long long int var_19 = -7958940871638757374LL;
short var_20 = (short)-23155;
int var_21 = -308940038;
int var_22 = 1942279278;
int var_23 = -809076522;
unsigned long long int var_24 = 11134502127786926015ULL;
unsigned long long int var_25 = 18386816199886294207ULL;
int var_26 = -911785158;
int var_27 = -832435998;
int var_28 = 1269179963;
int var_29 = -1141582696;
int var_30 = 1136991817;
signed char arr_0 [10] [10] ;
int arr_1 [10] [10] ;
int arr_3 [10] ;
int arr_4 [13] ;
signed char arr_5 [13] ;
int arr_6 [13] ;
unsigned long long int arr_7 [13] [13] [13] ;
unsigned short arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -1149367533;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -35142776;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -617744974;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -2065045422;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 11060587870016715339ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned short)52516;
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
    hash(&seed, var_30);
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
