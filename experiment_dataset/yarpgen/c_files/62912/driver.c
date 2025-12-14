#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
signed char var_5 = (signed char)-60;
long long int var_7 = 3898645795822025127LL;
int var_8 = 561007303;
int zero = 0;
signed char var_11 = (signed char)14;
signed char var_12 = (signed char)-30;
short var_13 = (short)20749;
int var_14 = 176595853;
short arr_0 [21] ;
unsigned char arr_3 [21] [21] ;
int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)8856;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 536046588;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
