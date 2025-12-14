#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1698369299U;
_Bool var_2 = (_Bool)0;
int var_5 = -2035181708;
signed char var_7 = (signed char)-62;
unsigned short var_8 = (unsigned short)29333;
int var_9 = -101132756;
signed char var_11 = (signed char)-11;
signed char var_12 = (signed char)-59;
unsigned long long int var_14 = 8767902374356230253ULL;
int var_15 = -1857866513;
unsigned char var_16 = (unsigned char)98;
int var_17 = 1937221828;
int var_18 = -519949630;
int zero = 0;
int var_19 = -848002914;
_Bool var_20 = (_Bool)0;
int var_21 = -416204728;
int var_22 = 1542558255;
unsigned char var_23 = (unsigned char)179;
unsigned int var_24 = 516785644U;
unsigned short var_25 = (unsigned short)57803;
unsigned long long int var_26 = 2439248082144116535ULL;
unsigned short var_27 = (unsigned short)10451;
signed char var_28 = (signed char)74;
int var_29 = 1639811364;
unsigned char var_30 = (unsigned char)160;
int var_31 = 254528809;
unsigned int var_32 = 178190765U;
int var_33 = -220832143;
int arr_0 [18] [18] ;
int arr_1 [18] [18] ;
unsigned char arr_2 [18] ;
int arr_3 [18] [18] [18] ;
int arr_4 [18] ;
unsigned int arr_5 [18] [18] [18] ;
int arr_6 [18] [18] [18] ;
int arr_7 [18] [18] [18] ;
signed char arr_8 [18] [18] ;
unsigned int arr_12 [18] [18] [18] ;
int arr_14 [18] ;
signed char arr_15 [18] [18] [18] [18] ;
unsigned short arr_16 [18] [18] [18] [18] [18] ;
unsigned long long int arr_18 [14] ;
int arr_19 [14] ;
unsigned int arr_20 [14] ;
unsigned short arr_17 [18] [18] [18] ;
unsigned int arr_21 [14] ;
_Bool arr_22 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? -2018138033 : -794194837;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -614664943 : 1210151642;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -113093908 : -1879935729;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1821765659 : 1302645033;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 320396727U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 855993433;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1566636256 : 1241917806;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2679429504U : 3209528061U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = 1074462058;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-39 : (signed char)-90;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)6213;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = 14077537568779829976ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = 252961077;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = 128942927U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)26317 : (unsigned short)35000;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = 93985760U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
