#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4746695705634928291LL;
unsigned char var_6 = (unsigned char)176;
unsigned short var_9 = (unsigned short)20990;
unsigned short var_10 = (unsigned short)33987;
unsigned short var_12 = (unsigned short)8683;
int zero = 0;
unsigned char var_13 = (unsigned char)242;
unsigned short var_14 = (unsigned short)53731;
unsigned long long int var_15 = 17803127771858486357ULL;
unsigned short var_16 = (unsigned short)25109;
unsigned short var_17 = (unsigned short)7034;
unsigned long long int arr_1 [21] ;
unsigned short arr_3 [23] ;
int arr_4 [23] [23] ;
unsigned short arr_2 [21] ;
unsigned int arr_5 [23] ;
unsigned short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 7464710006542892219ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)62740;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = -263425533;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)1046 : (unsigned short)18367;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1504356014U : 2110255527U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4710 : (unsigned short)35764;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
