#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12699798741562426825ULL;
signed char var_3 = (signed char)63;
unsigned short var_5 = (unsigned short)1221;
unsigned long long int var_7 = 14889776411659721714ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 7760682931512481091ULL;
int var_16 = 1908519228;
long long int var_17 = 4215758190261163398LL;
unsigned long long int var_18 = 1277010576864395415ULL;
unsigned long long int var_19 = 14388297045446869911ULL;
unsigned long long int var_20 = 16970570357874725273ULL;
long long int var_21 = -4784526061815939178LL;
unsigned long long int var_22 = 3841252870267670430ULL;
unsigned char var_23 = (unsigned char)104;
unsigned long long int var_24 = 1292176568543386784ULL;
unsigned char var_25 = (unsigned char)240;
unsigned long long int var_26 = 13184805927397861168ULL;
int var_27 = 1989529984;
unsigned long long int var_28 = 17598180360182746388ULL;
unsigned long long int var_29 = 12387380853843441842ULL;
int var_30 = 1651015175;
unsigned int var_31 = 19439922U;
_Bool var_32 = (_Bool)1;
unsigned long long int arr_0 [20] [20] ;
unsigned short arr_1 [20] ;
_Bool arr_2 [20] ;
int arr_4 [20] [20] ;
unsigned long long int arr_5 [20] [20] ;
unsigned short arr_7 [20] [20] ;
_Bool arr_8 [20] ;
unsigned short arr_10 [20] [20] [20] ;
unsigned short arr_11 [20] ;
unsigned long long int arr_16 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 13578508995861073298ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)4500;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 1262204200;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 11336393512364654533ULL : 2287947468252226744ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)53400;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)8195;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44377 : (unsigned short)32340;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 3099871885976768179ULL : 13079726626233895583ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
