#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)10;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-57;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)108;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)97;
signed char var_22 = (signed char)28;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)70;
signed char var_25 = (signed char)103;
_Bool var_26 = (_Bool)0;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)-54;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)1;
_Bool var_31 = (_Bool)0;
signed char var_32 = (signed char)-89;
_Bool var_33 = (_Bool)0;
_Bool var_34 = (_Bool)1;
_Bool var_35 = (_Bool)1;
_Bool var_36 = (_Bool)0;
signed char var_37 = (signed char)-14;
signed char var_38 = (signed char)28;
_Bool var_39 = (_Bool)1;
_Bool var_40 = (_Bool)1;
_Bool var_41 = (_Bool)1;
signed char var_42 = (signed char)-48;
_Bool var_43 = (_Bool)1;
signed char arr_0 [19] ;
_Bool arr_2 [19] [19] [19] ;
signed char arr_8 [20] ;
_Bool arr_9 [20] ;
signed char arr_10 [25] [25] ;
_Bool arr_11 [25] ;
_Bool arr_12 [25] ;
signed char arr_13 [25] [25] [25] ;
_Bool arr_14 [25] [25] ;
_Bool arr_16 [25] [25] [25] [25] ;
_Bool arr_17 [25] [25] [25] [25] ;
_Bool arr_18 [25] [25] ;
_Bool arr_19 [25] [25] ;
_Bool arr_20 [25] [25] ;
signed char arr_24 [25] [25] [25] ;
_Bool arr_31 [11] [11] ;
signed char arr_32 [11] ;
_Bool arr_37 [11] [11] ;
_Bool arr_41 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_31 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_32 [i_0] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_37 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
