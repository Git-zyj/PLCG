#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4562298829911646409LL;
int var_1 = 1946549808;
unsigned long long int var_3 = 11216739757008255795ULL;
short var_4 = (short)7461;
unsigned short var_5 = (unsigned short)60398;
unsigned short var_6 = (unsigned short)1652;
unsigned int var_8 = 3868217465U;
unsigned long long int var_9 = 12833141577082744215ULL;
unsigned long long int var_10 = 344005977875929757ULL;
long long int var_13 = 8767781638525908468LL;
signed char var_14 = (signed char)6;
int zero = 0;
unsigned long long int var_16 = 3582487303479545668ULL;
int var_17 = -1154756272;
long long int var_18 = 4820760850905169763LL;
unsigned int var_19 = 2268421487U;
signed char var_20 = (signed char)-30;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)42;
short var_24 = (short)7307;
int var_25 = 1303282446;
signed char var_26 = (signed char)-76;
unsigned int var_27 = 1034409980U;
long long int var_28 = -8174888246093220716LL;
unsigned int var_29 = 215255236U;
unsigned long long int var_30 = 4094252601007569269ULL;
signed char var_31 = (signed char)101;
unsigned char arr_0 [14] ;
long long int arr_1 [14] [14] ;
signed char arr_4 [22] ;
int arr_12 [22] [22] [22] ;
unsigned int arr_20 [23] ;
unsigned short arr_32 [13] ;
int arr_34 [13] [13] ;
unsigned short arr_2 [14] ;
signed char arr_13 [22] [22] [22] ;
_Bool arr_14 [22] [22] [22] ;
signed char arr_17 [16] [16] ;
long long int arr_18 [16] ;
signed char arr_24 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -7418448493667987226LL : -5727728030026897955LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)91 : (signed char)-80;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1766517960 : 1486564989;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = 1166498557U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_32 [i_0] = (unsigned short)31794;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_34 [i_0] [i_1] = (i_0 % 2 == 0) ? -2030750102 : 437940358;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)38665 : (unsigned short)38092;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)55 : (signed char)125;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = -2223836953987828252LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (signed char)-1 : (signed char)93;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
