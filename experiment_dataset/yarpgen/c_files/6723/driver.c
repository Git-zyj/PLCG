#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 94807869U;
long long int var_3 = 2087860975816509916LL;
unsigned long long int var_4 = 5547712270380128725ULL;
unsigned int var_5 = 170846658U;
unsigned short var_6 = (unsigned short)4132;
unsigned short var_7 = (unsigned short)45088;
unsigned long long int var_9 = 4911547424596137160ULL;
unsigned int var_11 = 3325877702U;
long long int var_12 = -59378625249927961LL;
unsigned int var_15 = 1474708792U;
unsigned long long int var_16 = 968600498463733862ULL;
long long int var_17 = 7818694893943012706LL;
unsigned int var_19 = 167205079U;
int zero = 0;
unsigned short var_20 = (unsigned short)1352;
long long int var_21 = 5582370586374121398LL;
long long int var_22 = 1194484201477983248LL;
unsigned short var_23 = (unsigned short)14648;
long long int var_24 = 4347308596287870928LL;
unsigned long long int var_25 = 8447036967437182176ULL;
unsigned long long int var_26 = 11925170356715780620ULL;
long long int var_27 = 8177992514832485264LL;
long long int arr_0 [13] ;
unsigned short arr_1 [13] ;
unsigned short arr_2 [13] ;
unsigned short arr_4 [13] [13] ;
unsigned int arr_7 [13] [13] ;
long long int arr_3 [13] ;
unsigned int arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 3219760801317503410LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)20272;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)61592;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)39148;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 333695008U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 4544611833493724945LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 1839483164U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
