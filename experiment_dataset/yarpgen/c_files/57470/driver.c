#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-23;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)163;
unsigned short var_3 = (unsigned short)20920;
signed char var_4 = (signed char)21;
signed char var_5 = (signed char)-99;
unsigned int var_6 = 3664667805U;
unsigned short var_7 = (unsigned short)16204;
unsigned long long int var_8 = 16040627020524711891ULL;
unsigned short var_9 = (unsigned short)2908;
int var_10 = 93295633;
unsigned int var_11 = 3790722609U;
unsigned long long int var_12 = 4246776274780185940ULL;
unsigned short var_13 = (unsigned short)25282;
int var_14 = -423843077;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)182;
int zero = 0;
unsigned short var_17 = (unsigned short)34667;
unsigned int var_18 = 1148477879U;
unsigned char var_19 = (unsigned char)183;
unsigned int var_20 = 1972286802U;
unsigned int var_21 = 3163998102U;
int var_22 = 1008701378;
unsigned char var_23 = (unsigned char)48;
unsigned char var_24 = (unsigned char)92;
signed char var_25 = (signed char)-83;
unsigned long long int var_26 = 13418828398865580212ULL;
unsigned int var_27 = 1957874487U;
unsigned short var_28 = (unsigned short)65511;
unsigned long long int var_29 = 12861193942273226404ULL;
unsigned char var_30 = (unsigned char)223;
unsigned long long int var_31 = 6513356121501593868ULL;
unsigned int var_32 = 599918939U;
unsigned long long int var_33 = 16038974088758882259ULL;
signed char var_34 = (signed char)29;
long long int var_35 = -1653622055321949643LL;
unsigned short var_36 = (unsigned short)10988;
signed char var_37 = (signed char)108;
signed char var_38 = (signed char)52;
long long int var_39 = -7632537897774095772LL;
unsigned int var_40 = 2358078825U;
unsigned char var_41 = (unsigned char)87;
long long int var_42 = 3305439690452763650LL;
unsigned long long int var_43 = 12137441983874228061ULL;
unsigned int var_44 = 1252376271U;
unsigned long long int arr_0 [19] ;
signed char arr_1 [19] [19] ;
unsigned char arr_2 [19] ;
unsigned short arr_3 [19] ;
unsigned long long int arr_4 [19] ;
unsigned char arr_5 [19] [19] [19] ;
int arr_6 [19] ;
unsigned int arr_7 [19] ;
int arr_8 [19] ;
long long int arr_9 [19] [19] [19] ;
unsigned char arr_13 [19] [19] [19] [19] ;
signed char arr_14 [19] [19] [19] [19] ;
unsigned char arr_15 [19] ;
int arr_16 [19] ;
unsigned short arr_20 [19] [19] [19] ;
unsigned long long int arr_21 [19] ;
unsigned short arr_25 [18] [18] ;
unsigned long long int arr_26 [18] ;
unsigned char arr_17 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 9527425161351428656ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)35395;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 18378737624093287759ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 691508707;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 2140688283U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = -866571470;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -1856877682884600072LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = -1366859194;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)63250;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = 7784966798861640838ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned short)18431;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = 504562904504162092ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)1 : (unsigned char)149;
}

void checksum() {
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
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
