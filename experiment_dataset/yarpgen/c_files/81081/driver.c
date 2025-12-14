#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15299;
_Bool var_1 = (_Bool)0;
long long int var_2 = -5130667218631435935LL;
unsigned char var_4 = (unsigned char)181;
unsigned long long int var_6 = 13101628685604703557ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 14985118907411946968ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 7027178733576278662LL;
int var_12 = 1816104049;
int var_13 = -1808554180;
unsigned long long int var_14 = 8938438680634798004ULL;
long long int arr_1 [17] ;
unsigned char arr_3 [17] [17] ;
_Bool arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 3733029671925027141LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
