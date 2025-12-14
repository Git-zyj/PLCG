#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19184;
unsigned short var_1 = (unsigned short)7994;
long long int var_2 = 8785987399996867039LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)36008;
unsigned int var_5 = 257627195U;
int var_6 = 540139273;
unsigned short var_7 = (unsigned short)51979;
unsigned long long int var_8 = 7073279532844516448ULL;
unsigned int var_9 = 3921278165U;
signed char var_10 = (signed char)-6;
int zero = 0;
signed char var_11 = (signed char)-106;
unsigned short var_12 = (unsigned short)33824;
unsigned short var_13 = (unsigned short)36577;
unsigned short var_14 = (unsigned short)7038;
int var_15 = 1153779549;
int var_16 = -617262592;
unsigned short var_17 = (unsigned short)20169;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-111;
short var_20 = (short)-13228;
int var_21 = -831431820;
unsigned int var_22 = 814137748U;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)112;
long long int var_25 = 6204519705904823594LL;
int var_26 = 1036877495;
long long int var_27 = -525048518331400760LL;
long long int var_28 = -7629031427333927738LL;
_Bool var_29 = (_Bool)0;
unsigned int arr_0 [18] ;
signed char arr_1 [18] ;
unsigned short arr_2 [18] ;
long long int arr_4 [22] ;
unsigned short arr_5 [22] [22] ;
signed char arr_6 [11] ;
int arr_7 [11] [11] ;
short arr_9 [11] ;
int arr_11 [11] [11] [11] ;
unsigned long long int arr_15 [11] ;
signed char arr_16 [11] [11] [11] ;
long long int arr_21 [25] ;
short arr_22 [25] [25] ;
unsigned int arr_23 [25] ;
signed char arr_12 [11] ;
long long int arr_13 [11] [11] [11] ;
_Bool arr_17 [11] ;
unsigned short arr_20 [11] [11] [11] ;
long long int arr_24 [25] ;
unsigned long long int arr_25 [25] ;
long long int arr_26 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 48713788U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)3480;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 8931986218506306081LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)16544;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = -1631766712;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (short)20334;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -1636320285;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = 5433393759759770126ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = -8401109181765418624LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = (short)-9851;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = 3109679597U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)-22 : (signed char)-53;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -3895299431516577425LL : 3634228759195350610LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)63254;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? -3176337476317789212LL : 6930949384340602549LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 11842053912311448910ULL : 12742112517287139738ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 1855151532662019986LL : -3276662385260711158LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
