#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1354289361;
int var_1 = -996022874;
short var_2 = (short)-21640;
short var_3 = (short)30359;
short var_4 = (short)-14491;
int var_5 = 1318939171;
unsigned int var_6 = 2523658340U;
short var_7 = (short)-1401;
int var_8 = 773980460;
unsigned int var_9 = 584252394U;
int var_10 = 1362275339;
int var_11 = -184793487;
int var_12 = -715535542;
int zero = 0;
int var_13 = 2047998705;
short var_14 = (short)29873;
int var_15 = -1578087337;
short var_16 = (short)-18086;
int var_17 = 626319708;
unsigned int var_18 = 3897804617U;
int var_19 = -1763210344;
int var_20 = 2016968888;
int var_21 = -1388196254;
int var_22 = 1505075608;
int var_23 = -2145801099;
unsigned int var_24 = 2600894459U;
int var_25 = -192687526;
unsigned int var_26 = 881980819U;
int var_27 = 816369086;
unsigned int var_28 = 3547142297U;
int var_29 = 1328693439;
int var_30 = -281700392;
int var_31 = 1971805854;
short var_32 = (short)16716;
int var_33 = 983077741;
int var_34 = -1994051964;
int arr_0 [14] ;
unsigned int arr_2 [14] ;
unsigned int arr_3 [14] [14] [14] ;
int arr_4 [14] [14] [14] ;
unsigned int arr_5 [14] [14] ;
int arr_12 [10] ;
int arr_17 [10] [10] [10] [10] [10] [10] ;
unsigned int arr_23 [24] ;
unsigned int arr_24 [24] [24] ;
unsigned int arr_28 [14] ;
int arr_29 [14] ;
short arr_33 [14] ;
int arr_36 [14] ;
short arr_39 [14] [14] [14] ;
short arr_40 [14] ;
unsigned int arr_43 [14] [14] [14] [14] ;
int arr_54 [14] [14] ;
int arr_6 [14] [14] ;
int arr_21 [10] [10] [10] [10] [10] ;
int arr_22 [10] [10] ;
int arr_25 [24] ;
int arr_26 [24] ;
short arr_31 [14] ;
short arr_32 [14] ;
int arr_46 [14] [14] ;
short arr_47 [14] ;
int arr_48 [14] ;
int arr_51 [14] [14] ;
short arr_58 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1175753001;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 907687760U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4210551105U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -384886643;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 3538729043U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = 755298658;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 937713706 : 1545067536;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = 3633907491U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = 1025487877U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = 2910171645U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = -459915161;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_33 [i_0] = (short)10894;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_36 [i_0] = -1190571382;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)19911 : (short)17242;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_40 [i_0] = (short)31054;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3984663346U : 285341013U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_54 [i_0] [i_1] = (i_1 % 2 == 0) ? -81264106 : 820913303;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 165284343;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -425296562 : -87227664;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_22 [i_0] [i_1] = -1962699301;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = 948473815;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = -1297982282;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_31 [i_0] = (short)-16275;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_32 [i_0] = (short)-15298;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_46 [i_0] [i_1] = 2094938177;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_47 [i_0] = (short)2712;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_48 [i_0] = -326505909;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_51 [i_0] [i_1] = (i_1 % 2 == 0) ? -1337158853 : 550581230;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)23637 : (short)1887;
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
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_48 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_51 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_58 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
