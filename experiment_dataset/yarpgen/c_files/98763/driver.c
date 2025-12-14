#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-28;
_Bool var_1 = (_Bool)1;
long long int var_2 = 6852922929150106840LL;
signed char var_3 = (signed char)-124;
unsigned char var_4 = (unsigned char)224;
long long int var_5 = 2728166587626812830LL;
long long int var_6 = 5327281490426470506LL;
long long int var_7 = 5452295208090196627LL;
_Bool var_8 = (_Bool)0;
long long int var_10 = 8868824349016270105LL;
long long int var_11 = -2137537302782561974LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-31;
long long int var_14 = -6387105960698289924LL;
unsigned char var_15 = (unsigned char)59;
unsigned char var_16 = (unsigned char)17;
long long int var_17 = 7562634676616627974LL;
signed char var_18 = (signed char)-63;
long long int var_19 = -2218042658371927710LL;
signed char var_20 = (signed char)-94;
long long int var_21 = -5187974758743262123LL;
unsigned char var_22 = (unsigned char)231;
long long int var_23 = -5752544349092921065LL;
unsigned char var_24 = (unsigned char)154;
unsigned char var_25 = (unsigned char)123;
signed char var_26 = (signed char)5;
unsigned char var_27 = (unsigned char)107;
long long int var_28 = -4845743587443981426LL;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)99;
_Bool var_31 = (_Bool)0;
signed char var_32 = (signed char)113;
signed char var_33 = (signed char)45;
signed char arr_5 [18] [18] [18] [18] ;
signed char arr_6 [18] [18] ;
unsigned char arr_7 [18] [18] ;
unsigned char arr_9 [18] [18] [18] [18] ;
long long int arr_10 [18] [18] [18] [18] ;
unsigned char arr_11 [17] ;
_Bool arr_13 [17] [17] ;
long long int arr_18 [17] [17] [17] [17] [17] ;
long long int arr_27 [24] ;
unsigned char arr_28 [24] [24] [24] [24] ;
unsigned char arr_32 [24] [24] [24] ;
long long int arr_33 [24] [24] [24] [24] ;
long long int arr_34 [24] [24] [24] [24] ;
unsigned char arr_36 [21] [21] ;
signed char arr_19 [17] ;
long long int arr_23 [24] ;
long long int arr_44 [21] [21] [21] [21] ;
unsigned char arr_45 [21] ;
unsigned char arr_52 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-33 : (signed char)13;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)100 : (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)122 : (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -7383311341848694820LL : -3293389057913530438LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = -3853349956243333443LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = 432091227786930003LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -2550086994100573701LL : 506106821697741934LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 8434777858972827252LL : 547869372923583842LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_36 [i_0] [i_1] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (signed char)98 : (signed char)90;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = -912441859747977665LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 8090778111724470574LL : 6380462570322831566LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? (unsigned char)51 : (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? (unsigned char)102 : (unsigned char)238;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_52 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
