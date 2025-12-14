#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)95;
unsigned short var_1 = (unsigned short)404;
unsigned short var_2 = (unsigned short)60490;
long long int var_3 = 6681208965051542913LL;
short var_4 = (short)27946;
unsigned short var_9 = (unsigned short)19993;
unsigned char var_10 = (unsigned char)170;
int zero = 0;
unsigned char var_11 = (unsigned char)17;
int var_12 = 804280883;
unsigned short var_13 = (unsigned short)11066;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)47233;
signed char var_16 = (signed char)109;
unsigned char var_17 = (unsigned char)139;
unsigned char arr_0 [13] [13] ;
unsigned long long int arr_1 [13] [13] ;
int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 9806641256237350634ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2131250146 : 1322037411;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
