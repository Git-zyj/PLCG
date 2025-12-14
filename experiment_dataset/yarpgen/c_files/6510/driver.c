#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8984;
unsigned short var_1 = (unsigned short)21460;
unsigned int var_2 = 3065080527U;
unsigned int var_3 = 1477412226U;
int var_4 = -131557905;
unsigned char var_6 = (unsigned char)28;
signed char var_7 = (signed char)-66;
long long int var_8 = -4377165595349123211LL;
signed char var_9 = (signed char)101;
int zero = 0;
short var_11 = (short)24203;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 99750712U;
long long int var_14 = 4122296845447664617LL;
unsigned int var_15 = 3851565828U;
signed char var_16 = (signed char)-27;
unsigned int var_17 = 4111660122U;
unsigned long long int var_18 = 1529888796830413032ULL;
unsigned int var_19 = 3979887447U;
signed char var_20 = (signed char)35;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-58;
long long int arr_0 [14] ;
int arr_4 [14] [14] [14] ;
unsigned long long int arr_7 [14] [14] [14] [14] ;
unsigned int arr_8 [14] [14] [14] [14] ;
unsigned short arr_9 [14] ;
signed char arr_16 [15] ;
signed char arr_17 [15] ;
unsigned int arr_20 [18] ;
unsigned long long int arr_23 [18] [18] [18] ;
unsigned short arr_29 [20] [20] ;
short arr_30 [20] ;
unsigned short arr_2 [14] [14] ;
signed char arr_11 [14] [14] ;
int arr_12 [14] [14] [14] [14] [14] ;
unsigned long long int arr_15 [14] ;
signed char arr_18 [15] ;
_Bool arr_32 [20] [20] ;
int arr_33 [20] [20] ;
int arr_34 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2368064872802761594LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 863410372;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 5733518129357081581ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 4174594859U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (unsigned short)10042;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 3666546810U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 1337926219806710584ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned short)49674;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_30 [i_0] = (short)32301;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)11763;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = -1672411448;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = 726202996396000069ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_32 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_33 [i_0] [i_1] = -958091591;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_34 [i_0] = 797406798;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
