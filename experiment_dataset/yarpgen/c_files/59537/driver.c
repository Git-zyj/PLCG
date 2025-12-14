#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1370383175;
unsigned int var_3 = 1091639854U;
short var_4 = (short)11708;
unsigned long long int var_9 = 7132930502577972620ULL;
signed char var_11 = (signed char)31;
signed char var_13 = (signed char)-102;
unsigned short var_17 = (unsigned short)57196;
unsigned int var_18 = 2025494235U;
unsigned char var_19 = (unsigned char)219;
int zero = 0;
long long int var_20 = 2632172443207385920LL;
unsigned char var_21 = (unsigned char)137;
unsigned char arr_0 [18] [18] ;
unsigned long long int arr_4 [18] [18] ;
unsigned short arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 14164914326607438682ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (unsigned short)45060;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
