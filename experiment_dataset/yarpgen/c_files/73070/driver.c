#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3609595665U;
signed char var_2 = (signed char)120;
int var_3 = -521391681;
short var_5 = (short)30965;
long long int var_6 = 3461296343740454975LL;
int var_7 = -237709555;
unsigned long long int var_10 = 9613357828446319102ULL;
long long int var_13 = 2572718193263530273LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_17 = -4049692375171080308LL;
unsigned char var_18 = (unsigned char)182;
unsigned char var_19 = (unsigned char)107;
long long int var_20 = -3293001755008811334LL;
long long int arr_0 [20] [20] ;
long long int arr_1 [20] ;
signed char arr_3 [20] ;
unsigned long long int arr_6 [20] [20] [20] ;
unsigned short arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -7711202083536118824LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 9073474303635061198LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 7337088776590388689ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)11367 : (unsigned short)29234;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
