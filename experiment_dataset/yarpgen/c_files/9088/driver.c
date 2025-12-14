#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -32614243;
unsigned char var_1 = (unsigned char)164;
unsigned char var_2 = (unsigned char)11;
signed char var_5 = (signed char)-38;
unsigned long long int var_8 = 18303976232691657325ULL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-92;
int var_11 = -428875749;
int zero = 0;
long long int var_12 = 7807270247682666104LL;
int var_13 = 1573121420;
short var_14 = (short)-19022;
signed char var_15 = (signed char)-106;
int var_16 = -2018295670;
unsigned int var_17 = 2922017121U;
signed char var_18 = (signed char)-21;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-96;
unsigned int var_21 = 1180848213U;
unsigned char var_22 = (unsigned char)3;
signed char var_23 = (signed char)-125;
unsigned char var_24 = (unsigned char)73;
signed char var_25 = (signed char)-107;
_Bool var_26 = (_Bool)0;
short var_27 = (short)-11614;
int var_28 = -795390055;
short var_29 = (short)1471;
int var_30 = 488310437;
unsigned short var_31 = (unsigned short)22229;
int var_32 = 1695161729;
signed char var_33 = (signed char)121;
int var_34 = 834933007;
_Bool var_35 = (_Bool)0;
_Bool var_36 = (_Bool)0;
unsigned long long int var_37 = 12774026776225755295ULL;
_Bool var_38 = (_Bool)0;
signed char var_39 = (signed char)43;
unsigned char var_40 = (unsigned char)88;
signed char var_41 = (signed char)-125;
int var_42 = 215261235;
_Bool var_43 = (_Bool)1;
int var_44 = 949248701;
signed char var_45 = (signed char)109;
signed char var_46 = (signed char)-25;
int var_47 = -11792666;
unsigned long long int var_48 = 11232153570638866432ULL;
signed char var_49 = (signed char)-16;
long long int arr_0 [24] [24] ;
signed char arr_3 [24] [24] ;
_Bool arr_4 [24] ;
unsigned long long int arr_7 [24] [24] [24] ;
signed char arr_8 [24] [24] [24] [24] [24] ;
unsigned char arr_10 [18] [18] ;
unsigned long long int arr_12 [18] ;
int arr_17 [18] [18] [18] ;
signed char arr_19 [18] [18] ;
long long int arr_20 [18] [18] [18] ;
unsigned long long int arr_22 [18] [18] [18] [18] ;
unsigned long long int arr_23 [18] [18] [18] ;
_Bool arr_24 [18] [18] [18] [18] [18] ;
short arr_37 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -8639926952147624822LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 12679569346347549140ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 6937105057972187346ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 792627090;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -6547157647449279069LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 12462826881564291867ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 17677438124217530124ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)-27478 : (short)-29566;
}

void checksum() {
    hash(&seed, var_12);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
