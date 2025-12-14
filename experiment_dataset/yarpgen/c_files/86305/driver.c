#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -1153516911220495751LL;
signed char var_2 = (signed char)45;
unsigned char var_3 = (unsigned char)251;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-23;
unsigned short var_7 = (unsigned short)2196;
unsigned char var_8 = (unsigned char)118;
signed char var_10 = (signed char)-96;
_Bool var_11 = (_Bool)1;
long long int var_13 = 7446736474625297843LL;
int var_14 = 322604142;
long long int var_15 = 2329710171939124821LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -2778337726585871903LL;
int zero = 0;
int var_19 = -292109398;
signed char var_20 = (signed char)-79;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
long long int var_23 = -8188827122100869106LL;
long long int var_24 = 5342871464010135038LL;
unsigned char var_25 = (unsigned char)254;
int var_26 = 1060902056;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)8;
unsigned long long int var_29 = 5515752418710776275ULL;
signed char var_30 = (signed char)-44;
int var_31 = -1673047826;
int var_32 = -1764038550;
signed char var_33 = (signed char)-19;
unsigned char var_34 = (unsigned char)152;
_Bool var_35 = (_Bool)0;
signed char arr_0 [14] ;
long long int arr_3 [14] ;
int arr_7 [16] [16] ;
unsigned short arr_9 [16] [16] ;
unsigned char arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 5026024574304344604LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = -1036244900;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)13133;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)4 : (unsigned char)231;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
