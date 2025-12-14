#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 241649907;
signed char var_3 = (signed char)52;
int var_4 = -946062537;
unsigned char var_8 = (unsigned char)49;
unsigned char var_11 = (unsigned char)174;
unsigned short var_12 = (unsigned short)61129;
long long int var_13 = 7751257353928325766LL;
int zero = 0;
signed char var_15 = (signed char)39;
unsigned long long int var_16 = 4380502441315947990ULL;
int var_17 = -1953028878;
int var_18 = 1869978195;
signed char var_19 = (signed char)-17;
unsigned short var_20 = (unsigned short)62059;
unsigned long long int var_21 = 14407661941460097488ULL;
unsigned char var_22 = (unsigned char)96;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)132;
signed char var_25 = (signed char)-111;
unsigned short var_26 = (unsigned short)65125;
signed char var_27 = (signed char)82;
unsigned char var_28 = (unsigned char)227;
int var_29 = 685995821;
int var_30 = 533520496;
unsigned char var_31 = (unsigned char)103;
long long int var_32 = 63817570520226194LL;
unsigned char var_33 = (unsigned char)51;
_Bool var_34 = (_Bool)0;
unsigned long long int var_35 = 13098839586959747016ULL;
long long int var_36 = 3638345471545306975LL;
signed char arr_0 [14] ;
unsigned long long int arr_2 [14] [14] ;
unsigned short arr_6 [14] ;
signed char arr_7 [14] [14] [14] ;
int arr_10 [21] [21] ;
long long int arr_11 [21] [21] ;
_Bool arr_13 [21] ;
unsigned short arr_14 [21] [21] [21] ;
int arr_20 [21] [21] ;
unsigned short arr_21 [21] [21] [21] ;
int arr_22 [21] [21] [21] ;
unsigned char arr_23 [21] [21] [21] ;
unsigned long long int arr_24 [21] ;
short arr_25 [21] [21] ;
unsigned long long int arr_27 [21] [21] [21] ;
signed char arr_29 [21] [21] [21] [21] ;
signed char arr_39 [19] ;
unsigned long long int arr_43 [23] ;
long long int arr_44 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 3647208870860674361ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)47926;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = -64975861;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 7239222015485454135LL : 1181993943386953622LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)63119 : (unsigned short)30128;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = 656362147;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned short)52820;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1925665417 : -765593903;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)158 : (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_24 [i_0] = 3584622057140901402ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-22864 : (short)7939;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 7337585047527905898ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)21 : (signed char)-6;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_39 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_43 [i_0] = 17715954483274226967ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_44 [i_0] = -7831643358338809063LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_44 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
