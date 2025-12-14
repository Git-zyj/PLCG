#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -955055812;
long long int var_1 = 6642084899585566661LL;
unsigned long long int var_3 = 16255524874873087571ULL;
signed char var_5 = (signed char)-86;
short var_6 = (short)26857;
int var_7 = 54107056;
unsigned long long int var_10 = 18057277386540935625ULL;
unsigned char var_11 = (unsigned char)187;
unsigned long long int var_13 = 10596644366163412005ULL;
long long int var_14 = 2864708947200183471LL;
unsigned long long int var_15 = 9386409041923152558ULL;
int zero = 0;
signed char var_16 = (signed char)125;
unsigned short var_17 = (unsigned short)65218;
int var_18 = -1140412439;
unsigned char var_19 = (unsigned char)13;
unsigned short var_20 = (unsigned short)47819;
unsigned char var_21 = (unsigned char)253;
unsigned int var_22 = 2737111674U;
short var_23 = (short)7650;
short arr_0 [15] [15] ;
unsigned int arr_1 [15] ;
short arr_3 [15] ;
int arr_6 [15] [15] [15] [15] ;
short arr_8 [15] [15] [15] ;
unsigned short arr_9 [15] [15] ;
short arr_10 [15] [15] ;
int arr_12 [15] ;
int arr_14 [24] [24] ;
unsigned short arr_15 [24] [24] ;
int arr_16 [24] ;
unsigned int arr_5 [15] [15] [15] ;
unsigned short arr_13 [15] [15] [15] ;
short arr_17 [24] ;
unsigned long long int arr_18 [24] ;
unsigned int arr_19 [24] ;
short arr_22 [12] [12] ;
unsigned char arr_23 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-29172;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 3645903499U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-5177;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -375920241 : -436749383;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-25045 : (short)13814;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)23686;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-28530;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = -1403726940;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = 213969455;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)43382;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = 2076098169;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1277064994U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)57149;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (short)31747;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = 12139648929738039524ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = 4070490383U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_22 [i_0] [i_1] = (short)-12962;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)156;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
