#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8679;
unsigned short var_3 = (unsigned short)49370;
unsigned char var_6 = (unsigned char)141;
unsigned short var_8 = (unsigned short)58823;
long long int var_13 = -5921406196005183543LL;
unsigned int var_14 = 3111316888U;
long long int var_15 = 7766004316566020578LL;
int zero = 0;
signed char var_17 = (signed char)23;
unsigned short var_18 = (unsigned short)25833;
long long int var_19 = 3450481088059766388LL;
int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1567911082;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 16654151787675807173ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 528615635;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
