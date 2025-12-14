#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22809;
long long int var_2 = -7289129918247188040LL;
unsigned long long int var_3 = 16222609664900962573ULL;
unsigned char var_6 = (unsigned char)225;
signed char var_9 = (signed char)-26;
long long int var_12 = -2256887848776332819LL;
unsigned long long int var_14 = 16679725910940146074ULL;
int zero = 0;
signed char var_16 = (signed char)-3;
unsigned short var_17 = (unsigned short)51144;
short var_18 = (short)22466;
long long int var_19 = -746570767371125427LL;
unsigned long long int var_20 = 445379938298514671ULL;
unsigned char var_21 = (unsigned char)112;
int arr_1 [20] ;
_Bool arr_2 [20] ;
long long int arr_3 [20] ;
signed char arr_8 [18] [18] ;
_Bool arr_4 [20] ;
long long int arr_9 [18] ;
unsigned long long int arr_10 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -686866396;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -6905834186733337879LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = -5409837578045757572LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = 12866420191260341525ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
