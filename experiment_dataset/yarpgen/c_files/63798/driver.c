#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
unsigned short var_1 = (unsigned short)54552;
long long int var_2 = 3972988956560567144LL;
signed char var_3 = (signed char)69;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)55;
unsigned short var_6 = (unsigned short)1046;
long long int var_7 = -3429778405448010464LL;
short var_8 = (short)206;
short var_9 = (short)-8786;
long long int var_10 = -3748343051229297264LL;
unsigned short var_11 = (unsigned short)14430;
unsigned long long int var_13 = 4388953736521335037ULL;
int var_14 = 955856062;
int zero = 0;
unsigned long long int var_16 = 10230301834679031674ULL;
unsigned long long int var_17 = 12808194539041743506ULL;
short var_18 = (short)-13783;
int var_19 = -1349092876;
signed char arr_0 [13] ;
signed char arr_1 [13] ;
signed char arr_6 [13] ;
signed char arr_9 [13] [13] [13] ;
unsigned char arr_2 [13] [13] ;
long long int arr_10 [13] ;
int arr_11 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 7875468995514017612LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 1470508135;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
