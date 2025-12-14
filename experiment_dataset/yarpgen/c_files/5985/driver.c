#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
unsigned int var_1 = 4058105601U;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)160;
short var_7 = (short)-7805;
int zero = 0;
long long int var_10 = 8569890011186367155LL;
unsigned short var_11 = (unsigned short)10095;
unsigned long long int var_12 = 3309652639537594303ULL;
unsigned long long int var_13 = 1304151100974616795ULL;
short var_14 = (short)-32742;
_Bool var_15 = (_Bool)0;
long long int var_16 = 4340317419125429411LL;
signed char var_17 = (signed char)-85;
unsigned long long int arr_0 [17] [17] ;
unsigned short arr_2 [17] [17] ;
unsigned char arr_5 [14] ;
unsigned long long int arr_7 [14] ;
int arr_3 [17] [17] ;
unsigned short arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 7319296910496338564ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)24613;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 13082557268618601195ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = -556400477;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)27585;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
