#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50858;
unsigned long long int var_1 = 4039913457052816660ULL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3855244887U;
long long int var_4 = -3071837276230554LL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)55885;
short var_7 = (short)-1055;
unsigned short var_8 = (unsigned short)54414;
unsigned long long int var_10 = 1779068444545774987ULL;
unsigned long long int var_11 = 16787653306298931288ULL;
unsigned char var_12 = (unsigned char)47;
unsigned int var_13 = 681276463U;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)102;
short var_17 = (short)-9189;
int var_19 = 1834549925;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)60614;
unsigned long long int var_23 = 15474317406551741327ULL;
unsigned long long int var_24 = 6046888530928510756ULL;
unsigned long long int var_25 = 369035187546352285ULL;
short var_26 = (short)29658;
_Bool var_27 = (_Bool)1;
short var_28 = (short)9766;
short var_29 = (short)-10869;
short var_30 = (short)6938;
unsigned char var_31 = (unsigned char)98;
signed char var_32 = (signed char)-100;
unsigned short var_33 = (unsigned short)3450;
short var_34 = (short)3834;
_Bool var_35 = (_Bool)1;
unsigned short var_36 = (unsigned short)44563;
short var_37 = (short)-5846;
unsigned char arr_1 [18] ;
unsigned int arr_2 [18] [18] ;
unsigned long long int arr_3 [18] ;
unsigned long long int arr_4 [18] [18] [18] ;
_Bool arr_7 [18] [18] [18] [18] ;
unsigned int arr_8 [18] [18] ;
short arr_9 [18] [18] [18] [18] ;
_Bool arr_10 [18] [18] ;
_Bool arr_12 [18] ;
unsigned long long int arr_15 [18] [18] [18] [18] ;
signed char arr_18 [18] ;
_Bool arr_19 [18] ;
unsigned long long int arr_20 [18] [18] [18] [18] [18] ;
unsigned short arr_24 [18] [18] ;
short arr_25 [18] [18] [18] [18] [18] ;
long long int arr_26 [18] [18] ;
short arr_16 [18] [18] [18] ;
signed char arr_33 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)156 : (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 1635721252U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 6614272515126858120ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 222532398981056491ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 1167905066U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-14545;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 599147855833606588ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)-21 : (signed char)-3;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 15104138717970957552ULL : 6957594026397671249ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)27510;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)6030;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_26 [i_0] [i_1] = -4906958672076413309LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)4076 : (short)21047;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-51 : (signed char)78;
}

void checksum() {
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
