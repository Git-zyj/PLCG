#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)4624;
unsigned long long int var_2 = 4426252333812842955ULL;
long long int var_3 = -1915954199929908522LL;
int var_4 = 451487407;
short var_5 = (short)-1245;
int var_6 = 844916433;
short var_7 = (short)-28765;
short var_8 = (short)22956;
unsigned short var_10 = (unsigned short)64618;
int var_12 = 18235127;
unsigned long long int var_13 = 17670724176958304358ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)238;
signed char var_15 = (signed char)-78;
unsigned long long int var_16 = 6536742803741780987ULL;
short var_17 = (short)-27061;
int arr_0 [16] ;
long long int arr_1 [16] ;
_Bool arr_2 [16] [16] ;
long long int arr_3 [16] ;
long long int arr_4 [16] ;
int arr_5 [16] [16] [16] ;
unsigned int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1915757813;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2961138458051960133LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 775829732748580765LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 8082883813457578479LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 399735875;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 2187195605U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
