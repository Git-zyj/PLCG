#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26223;
short var_5 = (short)-27888;
unsigned int var_7 = 1715233589U;
unsigned char var_9 = (unsigned char)128;
long long int var_10 = -8928077843822874587LL;
unsigned char var_11 = (unsigned char)223;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)13743;
unsigned int var_14 = 39587148U;
unsigned char var_15 = (unsigned char)73;
unsigned short var_16 = (unsigned short)13655;
unsigned char var_17 = (unsigned char)224;
unsigned short var_18 = (unsigned short)64155;
unsigned int var_19 = 1515682037U;
unsigned char arr_1 [13] ;
short arr_2 [13] [13] ;
unsigned char arr_3 [13] [13] ;
long long int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)31908;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -822119491425780332LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
