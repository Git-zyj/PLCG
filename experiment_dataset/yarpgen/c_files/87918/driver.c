#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)27;
unsigned long long int var_4 = 15614234668108659675ULL;
signed char var_7 = (signed char)49;
signed char var_9 = (signed char)62;
unsigned long long int var_11 = 1162558378290785851ULL;
unsigned long long int var_12 = 18029944590913475880ULL;
signed char var_13 = (signed char)113;
unsigned long long int var_17 = 4094075012588780953ULL;
int var_18 = -384823783;
int zero = 0;
signed char var_20 = (signed char)-76;
int var_21 = -1224466283;
signed char var_22 = (signed char)-42;
signed char var_23 = (signed char)-35;
unsigned long long int var_24 = 4876024974303929159ULL;
unsigned long long int arr_1 [14] ;
unsigned long long int arr_2 [14] ;
int arr_3 [14] [14] ;
signed char arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 392110309910040532ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2175733796608536482ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 938853915;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)-46;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
