#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12257;
short var_1 = (short)21803;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)25765;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)65507;
long long int var_9 = -563356573355254141LL;
int var_10 = -1402443929;
int var_11 = 1920314250;
_Bool var_12 = (_Bool)0;
short var_16 = (short)14880;
int zero = 0;
long long int var_17 = -2303410464057765790LL;
unsigned long long int var_18 = 16749897527121401672ULL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)43386;
unsigned short var_21 = (unsigned short)58226;
short var_22 = (short)-15046;
int var_23 = 1481614812;
int var_24 = 339850350;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 9080074997837058538ULL;
short var_27 = (short)-9743;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 17534123145839184839ULL;
unsigned short var_30 = (unsigned short)23063;
short var_31 = (short)-29069;
int var_32 = -905213153;
unsigned short var_33 = (unsigned short)15089;
unsigned short var_34 = (unsigned short)39615;
unsigned short var_35 = (unsigned short)4244;
_Bool arr_0 [25] ;
unsigned long long int arr_1 [25] ;
int arr_2 [25] ;
unsigned short arr_4 [11] ;
_Bool arr_5 [11] [11] [11] ;
int arr_6 [11] [11] [11] ;
unsigned long long int arr_7 [11] [11] [11] ;
int arr_8 [11] [11] [11] ;
long long int arr_10 [11] ;
_Bool arr_11 [11] [11] [11] [11] ;
long long int arr_14 [11] [11] ;
short arr_17 [17] ;
int arr_9 [11] [11] ;
unsigned short arr_13 [11] ;
short arr_16 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 9836716343265113128ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1573099312;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)29123;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1703755353;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 4730590220473145831ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1193800754 : -551807348;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -6673826060428111528LL : 4725669891686724969LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = -2866975520337792240LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)5114 : (short)-2049;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 1543944199 : 2082263616;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4186 : (unsigned short)35088;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (short)8840;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
