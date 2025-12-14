#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1421699039036808340LL;
signed char var_1 = (signed char)48;
short var_2 = (short)626;
short var_3 = (short)-28972;
unsigned long long int var_4 = 5525131990232766857ULL;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)40;
unsigned int var_8 = 3398641900U;
unsigned long long int var_9 = 17254346784290275358ULL;
int zero = 0;
unsigned int var_10 = 1690663743U;
long long int var_11 = -5916704369601715744LL;
signed char var_12 = (signed char)-58;
int var_13 = 1600859730;
signed char var_14 = (signed char)53;
unsigned char var_15 = (unsigned char)200;
unsigned long long int var_16 = 18130447587624810442ULL;
signed char var_17 = (signed char)-53;
unsigned int var_18 = 3444861329U;
unsigned char var_19 = (unsigned char)63;
unsigned short var_20 = (unsigned short)20880;
long long int var_21 = 8757549343902030790LL;
signed char var_22 = (signed char)-44;
_Bool var_23 = (_Bool)1;
long long int var_24 = -4302171809117474917LL;
_Bool var_25 = (_Bool)1;
long long int var_26 = 792109049953855191LL;
signed char var_27 = (signed char)69;
unsigned int var_28 = 364984201U;
unsigned int var_29 = 3174970279U;
int var_30 = -2025849385;
unsigned long long int var_31 = 11385461184991782243ULL;
unsigned int arr_0 [16] ;
int arr_2 [16] [16] ;
signed char arr_4 [10] ;
unsigned long long int arr_7 [10] ;
_Bool arr_8 [10] [10] [10] [10] ;
unsigned char arr_9 [10] [10] [10] [10] ;
int arr_15 [10] ;
unsigned short arr_21 [19] ;
signed char arr_23 [19] ;
unsigned short arr_28 [17] [17] ;
int arr_10 [10] [10] [10] [10] ;
_Bool arr_20 [14] ;
_Bool arr_24 [19] [19] ;
unsigned long long int arr_29 [17] [17] [17] ;
long long int arr_30 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 16177749U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 1855317344;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)105 : (signed char)89;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 250813200689436465ULL : 10203097312887915457ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -1128130429 : -405203873;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = (unsigned short)28107;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned short)34369;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -616373464 : 283283585;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 2076089314083590550ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_30 [i_0] = -5272125680910003970LL;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
