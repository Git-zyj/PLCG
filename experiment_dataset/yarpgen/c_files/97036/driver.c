#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1162149267359963349LL;
signed char var_2 = (signed char)59;
int var_4 = 984970209;
unsigned long long int var_6 = 971783077856936033ULL;
_Bool var_7 = (_Bool)1;
short var_10 = (short)14974;
unsigned short var_11 = (unsigned short)13777;
int zero = 0;
signed char var_12 = (signed char)-37;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 13721389088870672796ULL;
int var_15 = 1526999608;
long long int var_16 = -3140089820654923176LL;
unsigned long long int var_17 = 7793600180577694938ULL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
signed char arr_0 [18] ;
unsigned char arr_4 [23] ;
long long int arr_5 [23] [23] ;
long long int arr_3 [18] [18] ;
long long int arr_6 [23] ;
long long int arr_9 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 5132867539980323011LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = -1399606365347739457LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 2700157571555107913LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = -5594666220052976421LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
