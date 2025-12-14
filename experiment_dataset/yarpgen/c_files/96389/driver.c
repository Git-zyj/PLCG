#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
signed char var_1 = (signed char)88;
signed char var_2 = (signed char)-52;
int var_3 = 1085519664;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 55233430U;
signed char var_7 = (signed char)-32;
int var_8 = 2030945519;
unsigned short var_9 = (unsigned short)48366;
unsigned int var_10 = 1367245817U;
unsigned short var_11 = (unsigned short)21144;
signed char var_12 = (signed char)-47;
unsigned long long int var_13 = 10796868670732045328ULL;
long long int var_14 = 9072035158547329796LL;
int var_15 = -2046556939;
int zero = 0;
unsigned int var_16 = 143497199U;
int var_17 = 1240632054;
signed char var_18 = (signed char)-82;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)74;
signed char var_22 = (signed char)-71;
int var_23 = 699667654;
long long int var_24 = -4979395327961529880LL;
int var_25 = 1471250120;
unsigned char var_26 = (unsigned char)53;
long long int arr_0 [21] [21] ;
signed char arr_1 [21] [21] ;
unsigned short arr_2 [21] [21] ;
int arr_4 [14] ;
int arr_5 [14] ;
int arr_6 [14] [14] ;
signed char arr_8 [14] [14] [14] ;
int arr_9 [14] [14] [14] ;
unsigned int arr_10 [14] [14] [14] ;
long long int arr_11 [14] [14] [14] [14] ;
long long int arr_12 [14] ;
unsigned char arr_13 [14] [14] [14] [14] ;
long long int arr_16 [20] ;
unsigned long long int arr_17 [20] ;
int arr_3 [21] ;
unsigned int arr_14 [14] [14] ;
signed char arr_15 [14] [14] [14] ;
int arr_21 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 3125881777994691195LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)29381;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -1794635969;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -322687877;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 409083708;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1483220898;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 4010743634U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -5678138432055514930LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = -7468859081890349473LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = -6402247485479779981LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 5063402836666140561ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1345973670;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 433994404U : 309393190U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 1513301881 : -1983819162;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
