#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2331756792816625267LL;
long long int var_1 = -6438742770931721098LL;
unsigned char var_2 = (unsigned char)57;
unsigned char var_3 = (unsigned char)84;
unsigned char var_9 = (unsigned char)17;
long long int var_10 = 2494989425372974623LL;
long long int var_11 = -1614234445523765170LL;
long long int var_12 = -1269098046176280878LL;
unsigned char var_13 = (unsigned char)139;
unsigned char var_15 = (unsigned char)133;
int zero = 0;
unsigned char var_16 = (unsigned char)148;
unsigned char var_17 = (unsigned char)144;
long long int var_18 = -2199632772823928938LL;
long long int var_19 = 2730969241051524564LL;
long long int var_20 = 3424343439035149572LL;
long long int var_21 = -6864714458890623417LL;
unsigned char var_22 = (unsigned char)139;
long long int var_23 = -6564535912662480889LL;
unsigned char arr_2 [24] ;
long long int arr_3 [24] ;
long long int arr_11 [24] ;
long long int arr_4 [24] ;
unsigned char arr_13 [24] [24] [24] [24] [24] ;
unsigned char arr_14 [24] [24] ;
long long int arr_17 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -5035596355608932537LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3316227266286922474LL : 7124674246770784577LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 894299353716965487LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)118 : (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)42 : (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 7676652842334513660LL : -3129002872487363660LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
