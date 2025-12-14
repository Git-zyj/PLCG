#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)29808;
unsigned short var_10 = (unsigned short)15835;
unsigned char var_12 = (unsigned char)68;
long long int var_17 = 2402249590961706029LL;
int zero = 0;
int var_20 = -195642305;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 4087267940U;
short var_23 = (short)18493;
unsigned int var_24 = 1237032519U;
unsigned int var_25 = 2414855365U;
signed char var_26 = (signed char)-53;
unsigned long long int var_27 = 3710179626565418514ULL;
int var_28 = -552080849;
long long int var_29 = -6992265311202023681LL;
unsigned int var_30 = 1187216602U;
short var_31 = (short)31218;
short var_32 = (short)12017;
_Bool var_33 = (_Bool)0;
long long int var_34 = -6455086384608359974LL;
_Bool var_35 = (_Bool)0;
signed char var_36 = (signed char)127;
unsigned int var_37 = 4132336407U;
unsigned int var_38 = 3992732664U;
unsigned long long int var_39 = 7895643328391134481ULL;
short arr_0 [14] ;
short arr_1 [14] [14] ;
long long int arr_2 [14] [14] [14] ;
unsigned char arr_3 [14] [14] ;
int arr_12 [14] [14] ;
int arr_20 [19] ;
unsigned char arr_21 [19] [19] ;
short arr_22 [19] ;
int arr_23 [19] ;
unsigned int arr_24 [19] ;
unsigned int arr_25 [19] ;
unsigned char arr_26 [19] [19] ;
unsigned long long int arr_27 [19] [19] ;
unsigned int arr_4 [14] ;
long long int arr_5 [14] ;
unsigned short arr_6 [14] ;
unsigned short arr_19 [14] [14] [14] [14] [14] ;
short arr_30 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)18261;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-25428;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -5890567384857401909LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = 1134044383;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = 1584265784;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (short)-22718;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = -1617625688;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = 430698377U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = 2923045112U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_27 [i_0] [i_1] = 5083338340746610768ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1715290218U : 1914404162U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1109133661422027386LL : 3199704108648356885LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15675 : (unsigned short)14932;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)52708 : (unsigned short)33764;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (short)16634 : (short)-5550;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
