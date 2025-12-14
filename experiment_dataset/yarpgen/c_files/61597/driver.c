#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17105;
unsigned short var_2 = (unsigned short)46219;
signed char var_4 = (signed char)-31;
int var_5 = 1475955136;
signed char var_6 = (signed char)-97;
unsigned int var_9 = 3740086253U;
unsigned short var_10 = (unsigned short)32822;
unsigned short var_12 = (unsigned short)60148;
unsigned long long int var_14 = 15252357930138108364ULL;
signed char var_16 = (signed char)107;
short var_19 = (short)24861;
int zero = 0;
unsigned char var_20 = (unsigned char)192;
short var_21 = (short)23130;
unsigned short var_22 = (unsigned short)51325;
signed char var_23 = (signed char)-98;
unsigned short var_24 = (unsigned short)63293;
short var_25 = (short)-11187;
short var_26 = (short)-175;
unsigned short var_27 = (unsigned short)63263;
_Bool var_28 = (_Bool)0;
long long int var_29 = 8792159746593727489LL;
unsigned short var_30 = (unsigned short)26823;
unsigned long long int var_31 = 3395029864023619653ULL;
_Bool var_32 = (_Bool)0;
short var_33 = (short)16004;
unsigned short var_34 = (unsigned short)394;
int var_35 = -1820021477;
short var_36 = (short)29215;
unsigned short var_37 = (unsigned short)48266;
unsigned short var_38 = (unsigned short)62005;
short var_39 = (short)-4603;
unsigned long long int var_40 = 15756438048371770374ULL;
unsigned int var_41 = 3608387231U;
int var_42 = -1550809632;
long long int var_43 = -6548217172231731579LL;
int var_44 = -1994413141;
int var_45 = 85234480;
long long int arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned char arr_2 [10] [10] ;
_Bool arr_4 [10] ;
unsigned short arr_6 [10] ;
short arr_7 [10] [10] [10] ;
unsigned long long int arr_10 [10] [10] ;
signed char arr_13 [10] [10] [10] ;
signed char arr_14 [10] ;
signed char arr_15 [10] [10] [10] ;
unsigned char arr_16 [10] [10] [10] ;
short arr_18 [10] [10] [10] ;
_Bool arr_19 [10] [10] [10] [10] ;
signed char arr_21 [10] [10] [10] ;
unsigned char arr_23 [10] [10] ;
_Bool arr_30 [10] [10] ;
unsigned short arr_33 [18] ;
unsigned char arr_36 [18] [18] ;
unsigned short arr_39 [18] ;
unsigned short arr_5 [10] ;
_Bool arr_9 [10] [10] [10] ;
signed char arr_20 [10] [10] [10] [10] ;
unsigned long long int arr_25 [10] [10] [10] ;
int arr_28 [10] [10] ;
short arr_34 [18] ;
signed char arr_42 [18] ;
unsigned short arr_46 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -6122487687557181517LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)64052;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)13031;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-2946;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 3705567264061071665ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)-30924;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_30 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3429 : (unsigned short)56838;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_36 [i_0] [i_1] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_39 [i_0] = (unsigned short)5166;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)62033 : (unsigned short)62385;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 6067236303267256951ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? 1821251276 : 243451466;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? (short)23470 : (short)5209;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? (signed char)75 : (signed char)76;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_46 [i_0] = (unsigned short)41948;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_46 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
