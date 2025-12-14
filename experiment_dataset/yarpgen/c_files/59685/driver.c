#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
unsigned short var_3 = (unsigned short)49571;
signed char var_4 = (signed char)115;
unsigned short var_9 = (unsigned short)7546;
long long int var_10 = 2339071024024869824LL;
int zero = 0;
int var_12 = 1045082098;
unsigned long long int var_13 = 14416299012490439731ULL;
int var_14 = -1209095476;
unsigned short var_15 = (unsigned short)19971;
unsigned long long int var_16 = 13735988452406634523ULL;
long long int arr_0 [19] [19] ;
signed char arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 7166186101561554367LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)52 : (signed char)-71;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
