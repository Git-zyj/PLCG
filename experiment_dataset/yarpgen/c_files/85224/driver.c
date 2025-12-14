#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31431;
_Bool var_2 = (_Bool)1;
long long int var_3 = -921372158854153897LL;
unsigned long long int var_4 = 12849153015819718342ULL;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-7163;
signed char var_12 = (signed char)-45;
int var_13 = -742909562;
unsigned long long int var_15 = 16074873347554991642ULL;
unsigned long long int var_17 = 12764105547944102651ULL;
short var_19 = (short)-4229;
int zero = 0;
unsigned int var_20 = 2883313445U;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-21654;
short var_23 = (short)-3106;
short var_24 = (short)-5808;
short var_25 = (short)28550;
unsigned long long int var_26 = 17463661347719991208ULL;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 171557725U;
short var_29 = (short)20413;
unsigned char var_30 = (unsigned char)173;
_Bool var_31 = (_Bool)0;
unsigned char var_32 = (unsigned char)243;
long long int var_33 = 4463328689129577085LL;
long long int var_34 = -2629129652945632097LL;
_Bool arr_4 [17] [17] [17] ;
long long int arr_6 [17] [17] ;
unsigned char arr_10 [17] ;
_Bool arr_18 [17] [17] [17] [17] ;
_Bool arr_32 [20] [20] [20] ;
int arr_48 [20] [20] [20] [20] ;
_Bool arr_50 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 4724028848194093831LL : -2688049599483789719LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = -1955214981;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_50 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
