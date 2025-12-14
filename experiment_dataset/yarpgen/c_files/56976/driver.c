#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 971636831U;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 4543743949271933463ULL;
signed char var_7 = (signed char)82;
long long int var_10 = 3132206606659126389LL;
signed char var_13 = (signed char)-87;
unsigned short var_15 = (unsigned short)57226;
int zero = 0;
unsigned short var_18 = (unsigned short)50847;
unsigned char var_19 = (unsigned char)162;
unsigned int var_20 = 3590547085U;
unsigned char var_21 = (unsigned char)125;
long long int arr_0 [25] [25] ;
signed char arr_1 [25] ;
unsigned char arr_2 [25] [25] ;
unsigned short arr_5 [25] ;
short arr_3 [25] [25] ;
signed char arr_4 [25] ;
unsigned int arr_12 [25] [25] [25] ;
short arr_13 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -796540514281319965LL : 6450275929665758441LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)11839;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-2185 : (short)-5242;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)41 : (signed char)7;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1103597280U : 630621753U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (short)11533;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
