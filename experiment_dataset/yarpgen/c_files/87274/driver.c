#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
unsigned int var_1 = 2674241819U;
int var_2 = 1167912493;
short var_3 = (short)-15966;
signed char var_4 = (signed char)-117;
long long int var_5 = -8334373310857490654LL;
short var_6 = (short)32759;
unsigned long long int var_7 = 405607662750464194ULL;
long long int var_8 = 4551313769984775527LL;
signed char var_9 = (signed char)-11;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 103850398U;
unsigned long long int var_12 = 15632646384342594587ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)97;
long long int var_14 = -5876472352119422499LL;
long long int var_15 = 750227417555195066LL;
unsigned char var_16 = (unsigned char)77;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int var_19 = -304879808;
unsigned long long int var_20 = 7796627930685526771ULL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 4062636093U;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)225;
unsigned int var_25 = 3280257991U;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 1053624947U;
long long int var_28 = -6576494735401733358LL;
signed char var_29 = (signed char)21;
long long int var_30 = 4599243339244692482LL;
unsigned char var_31 = (unsigned char)67;
unsigned char var_32 = (unsigned char)112;
unsigned long long int var_33 = 9217346764696349737ULL;
int var_34 = -1903316016;
signed char var_35 = (signed char)-39;
_Bool var_36 = (_Bool)0;
long long int var_37 = -2562560574549599864LL;
unsigned char var_38 = (unsigned char)238;
unsigned int var_39 = 2571916587U;
short var_40 = (short)28689;
unsigned char var_41 = (unsigned char)100;
unsigned short var_42 = (unsigned short)47692;
int var_43 = 870772100;
int var_44 = -1305913353;
int var_45 = -397972227;
int var_46 = 619190733;
unsigned char var_47 = (unsigned char)189;
int var_48 = -1379306914;
unsigned int var_49 = 1724323687U;
unsigned long long int var_50 = 8986789702032223074ULL;
short var_51 = (short)14960;
unsigned int var_52 = 4049388100U;
unsigned int arr_0 [25] [25] ;
unsigned short arr_5 [25] [25] [25] ;
unsigned int arr_6 [25] [25] [25] [25] ;
unsigned int arr_8 [25] [25] [25] [25] ;
unsigned short arr_12 [25] [25] [25] ;
int arr_13 [25] [25] [25] ;
unsigned int arr_20 [25] [25] [25] ;
_Bool arr_23 [25] [25] [25] [25] [25] [25] [25] ;
unsigned int arr_24 [25] [25] [25] [25] ;
long long int arr_31 [25] [25] [25] ;
unsigned short arr_32 [25] ;
long long int arr_38 [25] [25] [25] [25] ;
_Bool arr_40 [25] [25] [25] [25] [25] ;
signed char arr_43 [25] [25] [25] [25] [25] [25] ;
unsigned int arr_45 [25] [25] [25] [25] [25] ;
unsigned char arr_48 [25] [25] ;
signed char arr_11 [25] [25] [25] [25] ;
short arr_30 [25] ;
_Bool arr_44 [25] ;
unsigned short arr_53 [25] [25] [25] [25] ;
unsigned short arr_60 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 173077777U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)47083;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1072996620U : 3572605435U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 1203994837U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)58426;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 40643918;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 1365131887U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 3542634717U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 4237255994026600831LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = (unsigned short)18841;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = 8052927213348555056LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 2116156318U : 554415429U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_48 [i_0] [i_1] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)59 : (signed char)-53;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = (short)-26955;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)44355 : (unsigned short)15821;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_60 [i_0] = (unsigned short)10898;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_53 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_60 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
