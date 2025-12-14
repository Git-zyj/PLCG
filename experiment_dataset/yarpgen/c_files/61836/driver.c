#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3064;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-4;
unsigned int var_8 = 1138563172U;
short var_12 = (short)23059;
signed char var_13 = (signed char)85;
unsigned char var_14 = (unsigned char)87;
unsigned char var_17 = (unsigned char)206;
unsigned long long int var_18 = 4173189551731680532ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 13575177643713910509ULL;
unsigned int var_21 = 2912041579U;
int var_22 = -789561476;
long long int var_23 = -5693759262733154142LL;
unsigned short var_24 = (unsigned short)56286;
signed char var_25 = (signed char)-106;
long long int arr_0 [25] ;
long long int arr_1 [25] [25] ;
unsigned char arr_4 [25] [25] ;
short arr_5 [25] ;
long long int arr_6 [25] ;
unsigned long long int arr_8 [25] ;
unsigned char arr_9 [25] [25] [25] ;
int arr_2 [25] ;
unsigned char arr_3 [25] ;
long long int arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 455585367675408556LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = -6343191802459163558LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)19017;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 3732684630816545302LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 6114912009754038060ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1179063904;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = -1012286010509162595LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
