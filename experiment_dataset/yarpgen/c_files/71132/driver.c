#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 389296557;
_Bool var_2 = (_Bool)0;
int var_3 = -1010610787;
signed char var_4 = (signed char)42;
signed char var_5 = (signed char)-90;
long long int var_6 = -7172750541558296705LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -6805060260148055711LL;
long long int var_9 = -54584141632593695LL;
short var_10 = (short)27008;
unsigned short var_11 = (unsigned short)18417;
int zero = 0;
unsigned long long int var_12 = 6760149340002777530ULL;
long long int var_13 = -4838201214997221843LL;
unsigned int var_14 = 3620526791U;
unsigned int var_15 = 3690983562U;
long long int var_16 = 3077331762074995312LL;
signed char var_17 = (signed char)90;
unsigned int var_18 = 1275890794U;
short var_19 = (short)-30166;
unsigned short var_20 = (unsigned short)42996;
unsigned short var_21 = (unsigned short)1279;
unsigned int var_22 = 2003781060U;
signed char var_23 = (signed char)-7;
unsigned long long int var_24 = 11698780412710735997ULL;
signed char var_25 = (signed char)17;
short var_26 = (short)-15548;
short var_27 = (short)22208;
unsigned short var_28 = (unsigned short)54094;
signed char var_29 = (signed char)-60;
unsigned long long int var_30 = 2007848988179323335ULL;
unsigned short var_31 = (unsigned short)64840;
short var_32 = (short)21772;
unsigned int var_33 = 4035275603U;
unsigned char var_34 = (unsigned char)96;
short var_35 = (short)14397;
signed char var_36 = (signed char)65;
unsigned long long int var_37 = 4322705932752873088ULL;
long long int var_38 = -4874657807580528186LL;
unsigned int var_39 = 403374922U;
signed char var_40 = (signed char)43;
unsigned long long int var_41 = 3988569585354712941ULL;
unsigned long long int var_42 = 8656730494129389127ULL;
unsigned long long int var_43 = 4400409740328869973ULL;
_Bool var_44 = (_Bool)0;
unsigned int arr_0 [19] ;
unsigned short arr_3 [19] ;
unsigned char arr_5 [19] ;
unsigned long long int arr_8 [19] [19] ;
signed char arr_9 [19] [19] ;
unsigned int arr_10 [19] ;
unsigned char arr_14 [19] [19] ;
unsigned long long int arr_15 [19] ;
unsigned int arr_19 [19] [19] ;
_Bool arr_20 [19] [19] ;
int arr_21 [19] [19] [19] [19] ;
unsigned short arr_22 [19] [19] [19] ;
unsigned int arr_25 [19] [19] [19] [19] [19] ;
unsigned int arr_29 [19] ;
unsigned short arr_31 [19] [19] [19] [19] [19] ;
int arr_37 [19] [19] [19] [19] [19] ;
unsigned long long int arr_44 [19] ;
signed char arr_4 [19] ;
long long int arr_16 [19] ;
unsigned short arr_26 [19] [19] [19] [19] [19] ;
unsigned short arr_27 [19] ;
long long int arr_30 [19] [19] [19] [19] ;
unsigned char arr_42 [19] [19] ;
_Bool arr_49 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 4250557338U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)57553;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 11657888265104458830ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 4015181622U : 1532179098U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = 3046481201597069346ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_19 [i_0] [i_1] = 2253896653U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 107155176;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned short)16802;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 1021557872U : 673477673U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = 3109692289U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)11001;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = -1916568024;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? 8403005521060217186ULL : 10630596915678296187ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -5768002060145610809LL : -4861499544328861761LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned short)36674 : (unsigned short)18469;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5225 : (unsigned short)859;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 6427355116851367070LL : -544577072955978227LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_42 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)221 : (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_49 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
