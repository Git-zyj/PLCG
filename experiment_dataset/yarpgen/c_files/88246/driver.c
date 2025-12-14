#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6361681060740845382LL;
unsigned short var_1 = (unsigned short)7718;
unsigned char var_2 = (unsigned char)227;
long long int var_3 = 7100220188871327018LL;
long long int var_4 = 7805269112253667864LL;
unsigned char var_7 = (unsigned char)250;
unsigned short var_8 = (unsigned short)42452;
long long int var_9 = 1500070188617891330LL;
unsigned char var_10 = (unsigned char)12;
unsigned short var_11 = (unsigned short)13576;
long long int var_13 = -5195867033454214364LL;
long long int var_14 = 367119859203553257LL;
long long int var_15 = 8681106763299624164LL;
long long int var_16 = 3984238254866038165LL;
int zero = 0;
long long int var_18 = -7885674975750247984LL;
long long int var_19 = -7432466584146495544LL;
long long int var_20 = 3045516443011292100LL;
unsigned char var_21 = (unsigned char)163;
long long int var_22 = 3675601512099818090LL;
unsigned short var_23 = (unsigned short)49161;
unsigned short var_24 = (unsigned short)54839;
long long int var_25 = -2231080922498415896LL;
unsigned char var_26 = (unsigned char)163;
unsigned short var_27 = (unsigned short)32484;
long long int var_28 = -7236313691452143512LL;
unsigned char var_29 = (unsigned char)234;
unsigned short var_30 = (unsigned short)21980;
long long int arr_0 [22] ;
unsigned short arr_2 [22] ;
long long int arr_3 [22] ;
long long int arr_4 [22] ;
long long int arr_5 [22] [22] [22] ;
long long int arr_6 [22] [22] [22] [22] ;
unsigned short arr_8 [22] [22] ;
unsigned short arr_15 [22] ;
unsigned char arr_18 [13] [13] ;
unsigned short arr_19 [13] [13] ;
long long int arr_22 [13] ;
unsigned short arr_10 [22] [22] [22] ;
unsigned short arr_11 [22] ;
unsigned char arr_16 [22] ;
long long int arr_17 [22] [22] [22] ;
long long int arr_20 [13] ;
unsigned short arr_24 [13] [13] ;
unsigned short arr_27 [13] [13] ;
unsigned char arr_31 [13] [13] ;
unsigned char arr_32 [13] ;
long long int arr_33 [13] ;
long long int arr_34 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -6155098272483150239LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)17730;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -8819722410170658849LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 2517222585665121057LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -6983850237401849448LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 8192923903916244771LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)46311;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (unsigned short)20593;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)19980;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = -8949731486456711723LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)34272;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned short)16717;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -8853953381575853174LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 5529871813772764528LL : -827826743916782123LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)41774 : (unsigned short)46693;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned short)55945;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)171 : (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (unsigned char)65 : (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? -3477650079275083810LL : -3728544795949304496LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? 6580540103312000233LL : 1173756247904299831LL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
