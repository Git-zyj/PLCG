#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 771875427U;
unsigned char var_5 = (unsigned char)48;
unsigned char var_7 = (unsigned char)187;
unsigned char var_9 = (unsigned char)18;
signed char var_10 = (signed char)-88;
int zero = 0;
unsigned int var_18 = 995683438U;
signed char var_19 = (signed char)-75;
long long int var_20 = -8240470370522268931LL;
unsigned int var_21 = 79143984U;
_Bool arr_0 [24] ;
unsigned char arr_1 [24] ;
long long int arr_2 [25] [25] ;
unsigned short arr_3 [25] [25] ;
long long int arr_4 [25] ;
unsigned int arr_5 [25] ;
unsigned char arr_6 [25] ;
signed char arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 8414951522761586034LL : -9013291266808726819LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)37952 : (unsigned short)49157;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 6724088360668328799LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2622961007U : 2532918843U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)239 : (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-17 : (signed char)109;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
