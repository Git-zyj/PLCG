#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1968736630U;
unsigned long long int var_4 = 10721253255413059540ULL;
long long int var_5 = 7389890347662790835LL;
unsigned short var_6 = (unsigned short)40626;
_Bool var_7 = (_Bool)1;
int var_8 = 943851008;
unsigned int var_9 = 1854301663U;
unsigned long long int var_11 = 11485857025271522601ULL;
unsigned short var_12 = (unsigned short)27385;
unsigned char var_13 = (unsigned char)98;
int zero = 0;
unsigned char var_14 = (unsigned char)0;
int var_15 = -1423079346;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)55642;
unsigned long long int var_18 = 5510758364001694252ULL;
int var_19 = 964659023;
_Bool var_20 = (_Bool)0;
int var_21 = -1434757578;
int var_22 = 1454905166;
unsigned int var_23 = 2996745697U;
unsigned int var_24 = 1341574170U;
unsigned short var_25 = (unsigned short)27798;
long long int var_26 = -5518092638115194818LL;
_Bool var_27 = (_Bool)1;
long long int var_28 = 3575706661986534991LL;
signed char var_29 = (signed char)36;
int arr_6 [13] [13] [13] [13] ;
unsigned long long int arr_12 [23] ;
signed char arr_13 [23] ;
_Bool arr_14 [23] ;
signed char arr_15 [23] [23] [23] ;
long long int arr_16 [23] [23] ;
long long int arr_18 [17] [17] ;
signed char arr_25 [17] [17] [17] ;
unsigned long long int arr_27 [18] ;
int arr_28 [18] ;
int arr_30 [24] ;
_Bool arr_9 [13] [13] [13] [13] ;
signed char arr_10 [13] [13] [13] [13] ;
long long int arr_19 [17] ;
long long int arr_26 [17] ;
short arr_32 [24] ;
long long int arr_35 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1310750447;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 16027316517210416222ULL : 17943125137525591005ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)-122 : (signed char)-9;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = 7654594340597995702LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = -228275598799806026LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_27 [i_0] = 6840645696015141885ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_28 [i_0] = -1642113569;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = 1455898040;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = -2045342864850403582LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_26 [i_0] = -1875297078546528729LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = (short)-1713;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_35 [i_0] = 7501859573967843705LL;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
