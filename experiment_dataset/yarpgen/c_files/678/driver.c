#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)16419;
short var_3 = (short)-19410;
signed char var_5 = (signed char)-54;
unsigned long long int var_7 = 5476008212020234728ULL;
long long int var_8 = 545625965082104114LL;
unsigned int var_10 = 421718763U;
unsigned int var_11 = 683887722U;
unsigned long long int var_13 = 10398201059792698328ULL;
_Bool var_14 = (_Bool)0;
int var_15 = 1905185469;
short var_16 = (short)-12867;
int zero = 0;
long long int var_17 = 2546250511494529206LL;
short var_18 = (short)18183;
signed char var_19 = (signed char)94;
long long int var_20 = 3823260745576134994LL;
unsigned long long int var_21 = 18183509964227704104ULL;
short var_22 = (short)30723;
unsigned int var_23 = 1823335638U;
long long int var_24 = -8840488594522820949LL;
int var_25 = -556314082;
_Bool var_26 = (_Bool)1;
short var_27 = (short)-11653;
_Bool var_28 = (_Bool)0;
int var_29 = -1042268297;
unsigned long long int var_30 = 17606790209029312199ULL;
short arr_0 [11] ;
unsigned char arr_1 [11] ;
long long int arr_2 [12] ;
_Bool arr_4 [25] ;
short arr_6 [25] ;
unsigned char arr_8 [25] ;
short arr_9 [25] [25] [25] [25] ;
long long int arr_10 [25] [25] [25] ;
unsigned char arr_14 [25] [25] [25] ;
short arr_15 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)4893;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 2093426848791527846LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)-17298;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)17933;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 2448836327147422548LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (short)-4592;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
