#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2055760528;
unsigned char var_4 = (unsigned char)112;
unsigned long long int var_5 = 2666055234765604608ULL;
int var_8 = -1980250744;
unsigned int var_9 = 2886216947U;
unsigned long long int var_15 = 17741297684917710137ULL;
int zero = 0;
int var_18 = -46901552;
unsigned long long int var_19 = 8321142926277256769ULL;
unsigned int var_20 = 3568824248U;
unsigned char arr_0 [19] ;
int arr_1 [19] ;
unsigned int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)145 : (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -562824431;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1484146532U : 2352866320U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
