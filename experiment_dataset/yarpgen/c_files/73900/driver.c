#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6020420023739082607LL;
unsigned short var_2 = (unsigned short)49453;
int var_4 = -2060519298;
short var_5 = (short)-16382;
long long int var_6 = 4425357546483598308LL;
unsigned int var_9 = 2323342383U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)16;
unsigned int var_16 = 2924694893U;
int zero = 0;
long long int var_17 = 3363618575660859863LL;
int var_18 = 1618516022;
unsigned long long int var_19 = 8408182035962754096ULL;
unsigned char var_20 = (unsigned char)191;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)188;
long long int var_23 = 5284360304887821236LL;
signed char var_24 = (signed char)-85;
signed char arr_0 [18] ;
unsigned long long int arr_1 [18] [18] ;
_Bool arr_3 [13] [13] ;
int arr_4 [13] ;
long long int arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-88 : (signed char)114;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 15511447996595805290ULL : 16915442866026011510ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -1517968383;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 3298207157372963678LL : 1975685764290130983LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
