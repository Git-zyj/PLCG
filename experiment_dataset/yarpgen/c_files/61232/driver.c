#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2104652777;
unsigned int var_3 = 536999572U;
unsigned char var_5 = (unsigned char)41;
unsigned int var_7 = 4117568616U;
unsigned int var_8 = 2532021814U;
long long int var_11 = -7103826362795733940LL;
long long int var_12 = -3661730500017701856LL;
int zero = 0;
unsigned char var_15 = (unsigned char)242;
unsigned int var_16 = 4104444320U;
signed char var_17 = (signed char)-11;
signed char var_18 = (signed char)89;
signed char var_19 = (signed char)-127;
unsigned char var_20 = (unsigned char)17;
signed char var_21 = (signed char)90;
unsigned int var_22 = 2277577475U;
int arr_0 [17] [17] ;
signed char arr_1 [17] ;
unsigned short arr_3 [21] ;
unsigned short arr_4 [21] [21] ;
unsigned short arr_6 [21] [21] ;
unsigned char arr_10 [23] ;
signed char arr_7 [21] ;
unsigned char arr_8 [21] ;
long long int arr_14 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 1410718132;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)57426;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)29444;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)6839;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = 3917988938130432427LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
