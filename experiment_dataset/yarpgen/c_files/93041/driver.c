#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
unsigned long long int var_1 = 15064888207640244204ULL;
long long int var_4 = 4649847546509970281LL;
unsigned char var_6 = (unsigned char)97;
_Bool var_8 = (_Bool)1;
long long int var_9 = -3581053854859810383LL;
long long int var_10 = 7578516499695409695LL;
long long int var_12 = -4413701560303131834LL;
long long int var_14 = -3957307882765130568LL;
long long int var_16 = -8599952883610508368LL;
int zero = 0;
long long int var_18 = 5740048684308673688LL;
unsigned long long int var_19 = 14718871337106339006ULL;
unsigned long long int var_20 = 5832732354026443843ULL;
unsigned int var_21 = 1011915722U;
long long int var_22 = -5155091294909995934LL;
unsigned long long int var_23 = 10870733523914416279ULL;
long long int var_24 = -3464278334223845221LL;
long long int var_25 = -104133876683702733LL;
unsigned long long int var_26 = 15248564850527602930ULL;
long long int var_27 = 6363674922792524660LL;
long long int arr_8 [10] [10] ;
unsigned int arr_9 [10] [10] [10] ;
signed char arr_16 [10] [10] [10] ;
long long int arr_17 [10] ;
unsigned long long int arr_18 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 2930924111618634165LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 277276400U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = 1433724457073350064LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = 17441285006632063778ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
