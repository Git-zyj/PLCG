#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4874;
unsigned short var_4 = (unsigned short)51874;
long long int var_5 = 2902013578172489584LL;
long long int var_6 = 6572118414742787746LL;
short var_7 = (short)-13487;
long long int var_8 = -2311889563679892294LL;
signed char var_11 = (signed char)62;
int zero = 0;
unsigned int var_12 = 4184489801U;
long long int var_13 = -1878461039710857050LL;
short var_14 = (short)4738;
long long int var_15 = 9016825591757681882LL;
unsigned char var_16 = (unsigned char)218;
long long int arr_1 [18] ;
unsigned short arr_4 [21] ;
long long int arr_10 [21] ;
long long int arr_17 [21] [21] [21] ;
unsigned char arr_19 [21] [21] [21] [21] ;
signed char arr_2 [18] ;
short arr_3 [18] [18] ;
unsigned char arr_8 [21] ;
int arr_9 [21] [21] ;
_Bool arr_12 [21] ;
unsigned char arr_20 [21] ;
unsigned int arr_21 [21] [21] ;
signed char arr_24 [21] ;
unsigned char arr_25 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3054310982452485095LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)45187;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = -6263860076236647019LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 7377612479113695127LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)27036;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 1203188988;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_21 [i_0] [i_1] = 3485443420U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_24 [i_0] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = (unsigned char)232;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
