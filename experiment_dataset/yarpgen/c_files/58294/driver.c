#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_5 = (signed char)126;
int var_8 = -366097824;
signed char var_10 = (signed char)-115;
long long int var_11 = -8365158500745485397LL;
signed char var_12 = (signed char)97;
long long int var_13 = 4069285502863577264LL;
unsigned long long int var_17 = 1153195554902757133ULL;
int zero = 0;
int var_18 = -473162669;
long long int var_19 = -704401470799676358LL;
unsigned long long int var_20 = 1654872703438146120ULL;
long long int var_21 = -2933472616800240935LL;
short var_22 = (short)-2217;
signed char var_23 = (signed char)-92;
long long int var_24 = 3320600581236635946LL;
short arr_2 [17] [17] ;
unsigned int arr_4 [17] [17] ;
int arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)5726;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 3666401014U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 134900550;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
