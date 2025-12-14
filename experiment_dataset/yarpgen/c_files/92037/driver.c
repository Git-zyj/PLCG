#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1575917759;
unsigned char var_2 = (unsigned char)229;
unsigned long long int var_3 = 13715710914307627147ULL;
signed char var_4 = (signed char)22;
signed char var_5 = (signed char)-96;
unsigned long long int var_6 = 5415113225576035955ULL;
unsigned int var_8 = 1432687270U;
unsigned char var_10 = (unsigned char)29;
unsigned int var_14 = 3001469084U;
signed char var_15 = (signed char)84;
unsigned long long int var_17 = 17413289144211817418ULL;
int var_18 = -1313255917;
int zero = 0;
int var_19 = -630683849;
unsigned long long int var_20 = 2872124619537606000ULL;
unsigned int var_21 = 2282641191U;
short var_22 = (short)-9804;
unsigned long long int var_23 = 1350784179084282780ULL;
unsigned long long int var_24 = 10249348023517519217ULL;
long long int var_25 = -5221672874187459858LL;
signed char var_26 = (signed char)65;
unsigned short var_27 = (unsigned short)32319;
_Bool var_28 = (_Bool)0;
unsigned long long int arr_0 [19] ;
long long int arr_2 [19] [19] ;
int arr_3 [19] [19] ;
signed char arr_5 [14] [14] ;
unsigned char arr_6 [14] ;
unsigned long long int arr_7 [14] ;
unsigned long long int arr_8 [14] [14] ;
signed char arr_10 [14] [14] ;
signed char arr_11 [14] [14] [14] [14] ;
signed char arr_4 [19] ;
_Bool arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 16274918620296360787ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 2356953665038221534LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -1717789269;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 4091222282395879082ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 10778198417859514656ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
