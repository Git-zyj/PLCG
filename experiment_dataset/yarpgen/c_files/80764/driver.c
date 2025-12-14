#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32158;
signed char var_2 = (signed char)-92;
unsigned long long int var_3 = 15861640011457806008ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)23;
unsigned long long int var_6 = 18023703280052258986ULL;
unsigned short var_7 = (unsigned short)35292;
unsigned char var_8 = (unsigned char)83;
unsigned char var_9 = (unsigned char)150;
int var_10 = 1635963534;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1166073535U;
unsigned short var_13 = (unsigned short)36564;
unsigned char var_14 = (unsigned char)205;
int var_15 = 1412232203;
long long int var_17 = 2772286831719433050LL;
int zero = 0;
unsigned long long int var_18 = 14057146883817678964ULL;
signed char var_19 = (signed char)14;
unsigned short var_20 = (unsigned short)6194;
long long int var_21 = 3051166306060086914LL;
unsigned long long int var_22 = 7539400155737028392ULL;
unsigned short var_23 = (unsigned short)20952;
unsigned char var_24 = (unsigned char)251;
signed char var_25 = (signed char)-65;
_Bool var_26 = (_Bool)0;
_Bool var_27 = (_Bool)1;
unsigned char var_28 = (unsigned char)168;
int var_29 = 1634848320;
unsigned short var_30 = (unsigned short)22933;
int var_31 = -74099966;
int var_32 = -686963862;
signed char var_33 = (signed char)126;
int var_34 = 1361350397;
unsigned char var_35 = (unsigned char)233;
signed char var_36 = (signed char)-109;
_Bool var_37 = (_Bool)0;
signed char var_38 = (signed char)41;
long long int var_39 = -847524640074271143LL;
_Bool var_40 = (_Bool)0;
long long int var_41 = 3221266299431831356LL;
unsigned long long int arr_0 [19] ;
signed char arr_1 [19] ;
unsigned long long int arr_2 [19] ;
signed char arr_3 [19] [19] [19] ;
signed char arr_5 [19] [19] [19] ;
unsigned long long int arr_8 [19] [19] [19] ;
unsigned long long int arr_9 [19] [19] [19] ;
signed char arr_10 [19] [19] [19] [19] ;
unsigned long long int arr_11 [19] ;
int arr_12 [19] ;
unsigned long long int arr_16 [19] [19] [19] ;
signed char arr_22 [19] [19] [19] [19] ;
unsigned char arr_24 [19] [19] [19] [19] ;
unsigned char arr_28 [19] [19] [19] [19] ;
int arr_29 [19] [19] [19] [19] ;
long long int arr_31 [19] [19] [19] [19] ;
signed char arr_34 [19] ;
int arr_6 [19] ;
int arr_7 [19] [19] ;
int arr_14 [19] [19] [19] [19] ;
int arr_15 [19] ;
unsigned short arr_33 [19] ;
signed char arr_46 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 15334055006594247995ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 13259318632193978510ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 5016258092894754653ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3059489836934274968ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 9931974490402521747ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 597546248;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 8857737093300784969ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)155 : (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 1375745931;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 9183441294286857651LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_34 [i_0] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 1243948746;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = 313552921;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 84928837;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = 731321148;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_33 [i_0] = (unsigned short)24846;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (signed char)25;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
