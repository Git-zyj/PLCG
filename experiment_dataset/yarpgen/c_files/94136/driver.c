#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 138240729U;
unsigned char var_1 = (unsigned char)178;
unsigned long long int var_2 = 5492694066965660788ULL;
unsigned short var_3 = (unsigned short)36532;
int var_5 = 108447536;
unsigned char var_6 = (unsigned char)135;
unsigned int var_7 = 3612861256U;
int var_8 = 916975501;
unsigned char var_9 = (unsigned char)141;
int zero = 0;
int var_10 = 1026724138;
unsigned char var_11 = (unsigned char)179;
_Bool var_12 = (_Bool)0;
int var_13 = 63116477;
unsigned int var_14 = 2331404028U;
unsigned int var_15 = 2238194674U;
long long int arr_1 [12] ;
unsigned int arr_3 [12] [12] ;
long long int arr_6 [12] ;
unsigned char arr_7 [12] [12] [12] [12] ;
long long int arr_15 [12] ;
int arr_16 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2752735716004470983LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 2326421781U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -5359427584930098297LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = 4349269183431914718LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = -1058875548;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
