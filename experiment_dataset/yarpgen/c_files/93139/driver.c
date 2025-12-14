#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16575;
signed char var_1 = (signed char)-22;
unsigned short var_2 = (unsigned short)7537;
unsigned char var_4 = (unsigned char)251;
unsigned long long int var_5 = 12684494679145398365ULL;
unsigned char var_6 = (unsigned char)165;
unsigned char var_7 = (unsigned char)251;
_Bool var_8 = (_Bool)0;
int var_10 = 743079642;
signed char var_11 = (signed char)12;
long long int var_12 = -8773847095666743754LL;
signed char var_13 = (signed char)-12;
int var_14 = -1751455363;
int zero = 0;
short var_15 = (short)12296;
short var_16 = (short)26277;
signed char var_17 = (signed char)-97;
unsigned short var_18 = (unsigned short)6981;
int var_19 = 1355749227;
signed char var_20 = (signed char)-121;
signed char arr_0 [21] [21] ;
unsigned short arr_3 [21] ;
signed char arr_4 [21] [21] ;
unsigned long long int arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)2703;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 4842335562406627327ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
