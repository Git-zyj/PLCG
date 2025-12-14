#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2911568361U;
unsigned short var_2 = (unsigned short)31461;
_Bool var_4 = (_Bool)0;
long long int var_5 = -1162066793804138852LL;
signed char var_7 = (signed char)-96;
unsigned short var_8 = (unsigned short)42239;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-6;
unsigned short var_17 = (unsigned short)40117;
int zero = 0;
unsigned char var_18 = (unsigned char)231;
short var_19 = (short)-25315;
signed char var_20 = (signed char)-106;
signed char var_21 = (signed char)-9;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)236;
signed char arr_0 [20] [20] ;
unsigned int arr_2 [20] ;
unsigned long long int arr_6 [22] [22] ;
long long int arr_7 [22] ;
_Bool arr_3 [20] ;
unsigned long long int arr_4 [20] ;
int arr_5 [20] ;
signed char arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2926699326U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 7669040392691196709ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 413153494758057537LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 6654661452198761043ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -1559939538;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-51;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
