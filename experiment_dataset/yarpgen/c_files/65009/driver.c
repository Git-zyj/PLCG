#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)65416;
unsigned long long int var_4 = 3418071292147423517ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 3434423130U;
unsigned short var_8 = (unsigned short)30109;
int var_9 = 2087196106;
unsigned int var_10 = 706404579U;
unsigned char var_11 = (unsigned char)90;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2743116039U;
int zero = 0;
unsigned long long int var_15 = 15342703857686168087ULL;
unsigned long long int var_16 = 10933416269273330287ULL;
unsigned long long int var_17 = 16091784029908397261ULL;
long long int var_18 = -1658172012768511363LL;
unsigned short var_19 = (unsigned short)39157;
unsigned int var_20 = 2513233943U;
unsigned long long int var_21 = 7581454356224399664ULL;
signed char var_22 = (signed char)-18;
_Bool var_23 = (_Bool)0;
int var_24 = 1258335940;
signed char arr_0 [19] ;
short arr_1 [19] ;
signed char arr_2 [19] ;
signed char arr_3 [19] ;
unsigned int arr_5 [19] ;
long long int arr_6 [19] [19] [19] ;
int arr_7 [19] [19] ;
unsigned int arr_8 [19] [19] [19] ;
unsigned char arr_13 [10] ;
long long int arr_15 [10] [10] [10] ;
unsigned int arr_18 [10] [10] [10] ;
unsigned int arr_20 [10] [10] [10] [10] ;
short arr_22 [10] [10] [10] [10] ;
unsigned int arr_31 [21] [21] ;
int arr_4 [19] ;
unsigned int arr_9 [19] [19] ;
unsigned long long int arr_10 [19] [19] ;
signed char arr_11 [19] ;
int arr_27 [14] ;
unsigned int arr_28 [14] [14] ;
unsigned int arr_29 [14] ;
unsigned short arr_32 [21] ;
unsigned long long int arr_33 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)11789;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 1521580633U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2323383412559123280LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = -86942128;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1701307902U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -4394090219090408835LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 2807658840U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 398505244U : 1645618488U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-19267 : (short)21068;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_31 [i_0] [i_1] = 900354822U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -1977914143;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 4124722343U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 11694805673151883253ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_27 [i_0] = -2001903987;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_28 [i_0] [i_1] = 2525407177U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = 2535688219U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_32 [i_0] = (unsigned short)11996;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_33 [i_0] = 8602912981780896157ULL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
