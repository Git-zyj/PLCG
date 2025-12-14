#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6703257817037600756ULL;
unsigned long long int var_5 = 8035850674387093381ULL;
unsigned long long int var_6 = 9553560937135477363ULL;
unsigned int var_7 = 818690901U;
unsigned long long int var_10 = 7785761499683794784ULL;
unsigned int var_13 = 3562536103U;
int zero = 0;
signed char var_14 = (signed char)-55;
unsigned short var_15 = (unsigned short)58942;
long long int var_16 = -8418211448526839050LL;
short var_17 = (short)9751;
unsigned int arr_0 [16] ;
_Bool arr_1 [16] ;
unsigned short arr_2 [16] ;
long long int arr_4 [16] [16] ;
long long int arr_7 [16] ;
long long int arr_10 [16] ;
long long int arr_11 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1085053601U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)58276;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -1388601753840176406LL : -4099373183535781009LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = -2297298549624035749LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -3072515363082679518LL : 4135787946202406069LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 6529609316074863614LL : -6236618165599288393LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
