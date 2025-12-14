#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42935;
unsigned long long int var_2 = 296936781870100357ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 475697343U;
unsigned long long int var_6 = 9865427552348825912ULL;
unsigned int var_7 = 531193787U;
unsigned int var_8 = 3569621550U;
unsigned long long int var_10 = 6497718890581555296ULL;
unsigned int var_11 = 2478140433U;
long long int var_12 = 8149381698902981516LL;
unsigned int var_13 = 1219315987U;
int zero = 0;
int var_15 = 10381581;
long long int var_16 = 7747646765348280035LL;
long long int var_17 = -92037191329354519LL;
unsigned short var_18 = (unsigned short)41715;
int var_19 = 143909848;
unsigned int var_20 = 3582453361U;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)79;
unsigned char var_23 = (unsigned char)226;
unsigned long long int var_24 = 9789235461544569334ULL;
unsigned char arr_3 [18] [18] ;
unsigned int arr_11 [22] ;
unsigned long long int arr_12 [22] [22] ;
short arr_13 [22] [22] ;
int arr_9 [18] [18] [18] ;
unsigned short arr_14 [22] ;
unsigned int arr_19 [21] ;
long long int arr_20 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 305501187U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = 14723638143252182468ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (short)17705;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1006114088 : -230694287;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned short)30761;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 3761532675U : 2582633305U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? -1019281668552514342LL : -2968546280065571689LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
