#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3666286751885784145LL;
short var_3 = (short)-14671;
unsigned int var_4 = 3117058505U;
long long int var_5 = 8262368015524420741LL;
short var_8 = (short)25726;
unsigned int var_9 = 2150507301U;
int zero = 0;
unsigned short var_10 = (unsigned short)58816;
unsigned long long int var_11 = 12443468986204670745ULL;
unsigned int var_12 = 3521946213U;
unsigned long long int var_13 = 16158371783060751097ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)117;
unsigned char var_16 = (unsigned char)111;
unsigned char arr_1 [15] ;
long long int arr_2 [15] ;
signed char arr_6 [15] [15] ;
signed char arr_7 [19] ;
int arr_8 [19] ;
signed char arr_9 [19] [19] ;
unsigned long long int arr_10 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 2326119897371842537LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 1984287531;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 10714937163974875230ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
