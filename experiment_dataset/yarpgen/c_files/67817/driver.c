#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)123;
unsigned char var_8 = (unsigned char)207;
unsigned int var_10 = 2542511289U;
signed char var_11 = (signed char)113;
unsigned int var_12 = 536489233U;
unsigned char var_13 = (unsigned char)189;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-88;
unsigned long long int var_18 = 18430364996271211033ULL;
unsigned long long int var_19 = 7566809577518019039ULL;
unsigned long long int var_20 = 1733561955722514591ULL;
signed char var_21 = (signed char)111;
unsigned short var_22 = (unsigned short)29080;
unsigned short var_23 = (unsigned short)53333;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
long long int arr_0 [15] [15] ;
_Bool arr_4 [15] [15] ;
unsigned short arr_7 [25] [25] ;
unsigned short arr_6 [15] ;
signed char arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -5111192408504661318LL : 3531356797064687426LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)41699;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37987 : (unsigned short)1915;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (signed char)13;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
