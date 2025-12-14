#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58771;
long long int var_1 = -1441181731673641576LL;
unsigned short var_2 = (unsigned short)65241;
long long int var_3 = 8972103099833926608LL;
unsigned short var_4 = (unsigned short)30822;
unsigned int var_5 = 3406533124U;
unsigned long long int var_6 = 6646013913149465462ULL;
unsigned long long int var_8 = 15783449779079933787ULL;
unsigned short var_9 = (unsigned short)17631;
unsigned long long int var_13 = 3917454491373592246ULL;
int zero = 0;
int var_14 = 761503920;
unsigned short var_15 = (unsigned short)6890;
short var_16 = (short)24969;
unsigned short var_17 = (unsigned short)51153;
int var_18 = -1409880536;
unsigned int var_19 = 212860132U;
unsigned short var_20 = (unsigned short)24702;
long long int var_21 = 7742465481437381121LL;
unsigned long long int arr_0 [19] ;
unsigned long long int arr_2 [19] [19] ;
int arr_7 [19] [19] ;
long long int arr_11 [24] ;
unsigned long long int arr_12 [24] ;
int arr_8 [19] [19] [19] ;
unsigned char arr_9 [19] ;
signed char arr_18 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 16949667451219996260ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 10307667106785373070ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -619357433 : -1197974562;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = -7882323063664284359LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 17030117147398517987ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1176071530 : -1632545072;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)4 : (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-91 : (signed char)4;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
