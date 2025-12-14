#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1858390553U;
unsigned long long int var_3 = 6019163502420535566ULL;
signed char var_4 = (signed char)-16;
long long int var_5 = 1495617451109129223LL;
unsigned long long int var_7 = 2908767382900305607ULL;
unsigned short var_8 = (unsigned short)43111;
int var_12 = 654062606;
signed char var_15 = (signed char)-18;
int zero = 0;
unsigned int var_17 = 3303196674U;
short var_18 = (short)-21706;
unsigned char var_19 = (unsigned char)186;
int var_20 = 588041571;
unsigned long long int var_21 = 9624961894828258611ULL;
unsigned char var_22 = (unsigned char)150;
unsigned long long int var_23 = 2737371060441315987ULL;
short var_24 = (short)-14703;
unsigned int var_25 = 1747941206U;
signed char var_26 = (signed char)-38;
unsigned short var_27 = (unsigned short)27793;
long long int var_28 = 8763965173486104789LL;
unsigned short var_29 = (unsigned short)29234;
unsigned short var_30 = (unsigned short)36788;
unsigned long long int arr_0 [11] ;
unsigned char arr_5 [21] ;
unsigned int arr_6 [21] ;
long long int arr_8 [21] ;
short arr_12 [21] ;
unsigned int arr_18 [21] [21] ;
unsigned int arr_26 [21] ;
long long int arr_34 [13] [13] [13] [13] ;
short arr_3 [11] ;
unsigned long long int arr_4 [11] ;
long long int arr_11 [21] [21] [21] ;
int arr_19 [21] [21] ;
long long int arr_28 [21] ;
unsigned long long int arr_37 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 221857931020637960ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 4185033811U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = -851434405928186067LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (short)-27095;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_18 [i_0] [i_1] = 1025821248U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = 4041528460U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = -9187803815592306870LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)19352;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 5365068798827837399ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 3403232440916885851LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 375568701 : -1724842488;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = -2294671762291810628LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_37 [i_0] = 3849637499660456024ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
