#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
signed char var_1 = (signed char)-96;
unsigned short var_2 = (unsigned short)40056;
signed char var_6 = (signed char)-98;
long long int var_7 = 7542784238161665757LL;
long long int var_8 = 8031618531086846335LL;
short var_9 = (short)2106;
signed char var_10 = (signed char)62;
long long int var_12 = 8684460765716314168LL;
long long int var_14 = -6176069874602934369LL;
long long int var_15 = 6743787745472324853LL;
int var_16 = 570160054;
unsigned short var_17 = (unsigned short)60021;
int zero = 0;
unsigned short var_19 = (unsigned short)33297;
unsigned char var_20 = (unsigned char)73;
signed char var_21 = (signed char)-108;
unsigned short var_22 = (unsigned short)59422;
signed char var_23 = (signed char)62;
int var_24 = 1117396106;
unsigned short var_25 = (unsigned short)48698;
unsigned short var_26 = (unsigned short)62748;
unsigned short arr_0 [25] ;
int arr_1 [25] ;
long long int arr_2 [25] [25] ;
long long int arr_3 [25] ;
signed char arr_5 [25] [25] [25] ;
unsigned short arr_6 [25] [25] ;
unsigned short arr_8 [25] ;
_Bool arr_9 [25] [25] [25] ;
long long int arr_11 [25] ;
unsigned short arr_13 [25] [25] ;
unsigned short arr_15 [25] ;
unsigned long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)23660;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1293835830;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 8713301059502442223LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -6137221912975704367LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)51425;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned short)61732;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 482308293513051605LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)57991;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (unsigned short)18828;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 8900674189131131396ULL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
