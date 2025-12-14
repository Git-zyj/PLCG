#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16543119739456216950ULL;
signed char var_2 = (signed char)-83;
long long int var_3 = 7895384006478400037LL;
_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int var_9 = -1571047117;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3986161275U;
int var_15 = 140266588;
unsigned long long int var_16 = 11237476992870086187ULL;
int var_17 = -1502104555;
short var_18 = (short)-13456;
long long int arr_0 [22] [22] ;
_Bool arr_4 [24] ;
int arr_5 [24] [24] ;
signed char arr_3 [22] ;
long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 5227531462508979055LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = -581127059;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)104 : (signed char)-118;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -7938417732889137319LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
