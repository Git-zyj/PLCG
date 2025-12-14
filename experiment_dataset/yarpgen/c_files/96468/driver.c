#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41164;
int var_1 = 1995120406;
unsigned int var_2 = 734032537U;
unsigned short var_3 = (unsigned short)3256;
long long int var_4 = -1194003073104189858LL;
signed char var_5 = (signed char)-98;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)38406;
unsigned short var_9 = (unsigned short)18439;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = 2815301050977049456LL;
long long int var_12 = -2943583196838997350LL;
unsigned long long int var_13 = 6234711403495743728ULL;
unsigned char var_14 = (unsigned char)77;
int var_15 = 422677620;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)165;
unsigned short var_18 = (unsigned short)14331;
unsigned short var_19 = (unsigned short)4289;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 6731138614867715443ULL;
unsigned long long int var_22 = 8881606477943828510ULL;
unsigned short var_23 = (unsigned short)11897;
long long int var_24 = -7411215340587235493LL;
short arr_0 [24] ;
long long int arr_1 [24] [24] ;
unsigned int arr_4 [23] ;
unsigned char arr_5 [23] [23] ;
short arr_7 [23] [23] ;
int arr_13 [23] [23] [23] [23] ;
unsigned short arr_19 [23] [23] [23] [23] ;
signed char arr_26 [24] ;
unsigned long long int arr_2 [24] ;
unsigned long long int arr_8 [23] ;
unsigned short arr_9 [23] [23] [23] ;
unsigned short arr_15 [23] [23] [23] ;
long long int arr_24 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)19588;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -533830424648641771LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 677683307U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-18768;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 1532069726;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned short)41463;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 7700772328637375497ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 4150167278423554447ULL : 4232884099575377429ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)2663 : (unsigned short)16090;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)55375 : (unsigned short)22489;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? 2899046024396560856LL : 9086697223108944024LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
