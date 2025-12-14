#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 806180592;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 892357866978094263ULL;
long long int var_4 = -5446058574737933852LL;
unsigned short var_5 = (unsigned short)61374;
short var_6 = (short)31124;
unsigned short var_7 = (unsigned short)13817;
unsigned long long int var_8 = 3628219001068139141ULL;
unsigned char var_9 = (unsigned char)81;
long long int var_10 = 7236621824614390508LL;
short var_11 = (short)-19981;
short var_12 = (short)21695;
long long int var_13 = 6572021794767162760LL;
int var_14 = -878882296;
unsigned short var_15 = (unsigned short)12682;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)43665;
signed char var_19 = (signed char)82;
long long int var_20 = 9119406000089046720LL;
unsigned int var_21 = 1333025440U;
unsigned long long int var_22 = 17298904389524997884ULL;
short var_23 = (short)-3332;
short var_24 = (short)10631;
unsigned long long int var_25 = 1825158038128574903ULL;
unsigned short var_26 = (unsigned short)24061;
unsigned long long int var_27 = 12395781728310672420ULL;
unsigned char var_28 = (unsigned char)25;
short var_29 = (short)-13234;
unsigned int var_30 = 3579080174U;
unsigned char var_31 = (unsigned char)32;
int var_32 = -1606909735;
_Bool arr_5 [23] ;
short arr_13 [23] [23] [23] ;
short arr_14 [23] ;
int arr_15 [23] [23] [23] [23] ;
long long int arr_16 [23] ;
unsigned int arr_19 [11] ;
unsigned long long int arr_22 [22] [22] ;
signed char arr_30 [22] [22] [22] ;
_Bool arr_31 [22] [22] [22] [22] ;
int arr_32 [22] [22] [22] [22] ;
unsigned short arr_36 [22] [22] ;
int arr_51 [22] [22] [22] ;
short arr_54 [21] ;
unsigned int arr_60 [21] ;
short arr_61 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)1478 : (short)21142;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)1914 : (short)1062;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2081731547 : 705491762;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 685994182495224785LL : 2895205612276500633LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 4078385524U : 695798886U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_22 [i_0] [i_1] = 12286931380633460985ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)82 : (signed char)-67;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -1127376134 : 924902919;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_36 [i_0] [i_1] = (unsigned short)15903;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1917049582 : -1415082624;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_54 [i_0] = (short)17648;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_60 [i_0] = 235328840U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = (short)-30844;
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
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_51 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_54 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_60 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_61 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
