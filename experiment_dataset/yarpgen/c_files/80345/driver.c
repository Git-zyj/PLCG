#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -714516056;
signed char var_3 = (signed char)-93;
int var_4 = 1556280061;
signed char var_5 = (signed char)100;
int var_6 = -154013441;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 4224083681U;
unsigned int var_11 = 213099401U;
int var_12 = -37591320;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)31368;
unsigned short var_16 = (unsigned short)5082;
unsigned char var_17 = (unsigned char)0;
short var_18 = (short)6751;
int zero = 0;
signed char var_20 = (signed char)124;
unsigned short var_21 = (unsigned short)23024;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)28;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 2107001595U;
int var_26 = 407151105;
unsigned int var_27 = 517841753U;
unsigned long long int var_28 = 9988985781688485361ULL;
int var_29 = -1241894123;
unsigned int var_30 = 1588490565U;
unsigned long long int var_31 = 6795508296746784957ULL;
unsigned long long int var_32 = 15208574972243206467ULL;
unsigned int var_33 = 4234708889U;
unsigned int var_34 = 2296141907U;
unsigned int var_35 = 3714486417U;
signed char var_36 = (signed char)-114;
_Bool var_37 = (_Bool)1;
unsigned long long int var_38 = 8719037874062315579ULL;
unsigned int var_39 = 2632535498U;
_Bool var_40 = (_Bool)1;
unsigned long long int var_41 = 11029998064496342081ULL;
_Bool var_42 = (_Bool)1;
_Bool var_43 = (_Bool)1;
unsigned long long int var_44 = 17489497028517734921ULL;
signed char var_45 = (signed char)84;
signed char var_46 = (signed char)-28;
int var_47 = -1655869733;
unsigned int var_48 = 565375646U;
_Bool arr_0 [14] ;
signed char arr_2 [14] ;
int arr_3 [14] [14] [14] ;
int arr_4 [14] ;
_Bool arr_5 [14] ;
signed char arr_7 [14] [14] ;
int arr_8 [14] [14] [14] [14] [14] ;
signed char arr_10 [14] [14] [14] ;
signed char arr_11 [14] ;
short arr_12 [14] [14] ;
unsigned char arr_14 [14] [14] [14] [14] [14] ;
_Bool arr_15 [14] [14] ;
int arr_20 [14] ;
int arr_23 [14] [14] ;
_Bool arr_28 [14] [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-7 : (signed char)-110;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2033013752 : 1183677552;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 1737421859;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-59 : (signed char)107;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 787080994;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-29861;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)112 : (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = 254674325;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_23 [i_0] [i_1] = -1075127724;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
