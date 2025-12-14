#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63274;
unsigned short var_2 = (unsigned short)23299;
long long int var_4 = 6683242745533550112LL;
unsigned char var_5 = (unsigned char)83;
unsigned long long int var_6 = 7055872383402396395ULL;
long long int var_9 = -4600050354738633323LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 5779992729104989807ULL;
int zero = 0;
int var_16 = 1334371492;
unsigned long long int var_17 = 15455309307051454296ULL;
unsigned char var_18 = (unsigned char)167;
short var_19 = (short)-8681;
int var_20 = 441512609;
unsigned short var_21 = (unsigned short)16464;
int var_22 = -486893912;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-112;
signed char arr_2 [22] [22] ;
unsigned int arr_9 [22] [22] [22] ;
unsigned char arr_14 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2938508110U : 4008221987U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)192;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
