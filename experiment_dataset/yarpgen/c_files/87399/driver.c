#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
signed char var_2 = (signed char)16;
unsigned int var_3 = 74354334U;
unsigned char var_4 = (unsigned char)114;
unsigned int var_7 = 3705582580U;
unsigned long long int var_8 = 10986345771249192842ULL;
int var_10 = 1084147061;
short var_11 = (short)-4408;
int var_16 = -415707546;
int zero = 0;
int var_18 = -91053371;
signed char var_19 = (signed char)29;
unsigned short var_20 = (unsigned short)10614;
short var_21 = (short)-30917;
unsigned short var_22 = (unsigned short)42599;
unsigned short var_23 = (unsigned short)41037;
short var_24 = (short)16619;
_Bool var_25 = (_Bool)0;
long long int var_26 = 1306613566471195816LL;
_Bool var_27 = (_Bool)1;
short var_28 = (short)-11901;
unsigned long long int var_29 = 11591111597088112747ULL;
unsigned short var_30 = (unsigned short)55763;
unsigned short var_31 = (unsigned short)35966;
unsigned long long int var_32 = 3861990627835949666ULL;
unsigned char var_33 = (unsigned char)118;
_Bool var_34 = (_Bool)0;
_Bool var_35 = (_Bool)1;
_Bool var_36 = (_Bool)1;
int arr_3 [18] [18] [18] ;
unsigned long long int arr_5 [18] [18] ;
long long int arr_10 [18] [18] [18] [18] [18] [18] [18] ;
long long int arr_14 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -790080796;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 17880203683605759896ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1970367168873009793LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -6445636964923143072LL : -1841626598056070687LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
