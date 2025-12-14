#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 889879954U;
unsigned int var_3 = 3787753348U;
signed char var_4 = (signed char)-38;
unsigned int var_6 = 2360630312U;
unsigned short var_7 = (unsigned short)31063;
signed char var_9 = (signed char)-75;
signed char var_10 = (signed char)105;
unsigned char var_12 = (unsigned char)26;
unsigned char var_13 = (unsigned char)204;
long long int var_14 = 8238892161640296038LL;
signed char var_15 = (signed char)-61;
int zero = 0;
unsigned char var_18 = (unsigned char)239;
long long int var_19 = 3557048910207877666LL;
unsigned char var_20 = (unsigned char)150;
long long int var_21 = -8729988285379956075LL;
unsigned int var_22 = 2419954636U;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)238;
unsigned long long int var_25 = 7537032347868013003ULL;
unsigned int arr_0 [13] [13] ;
unsigned int arr_1 [13] ;
unsigned int arr_5 [19] [19] ;
unsigned int arr_9 [23] ;
unsigned int arr_10 [23] [23] ;
unsigned char arr_2 [13] [13] ;
long long int arr_3 [13] ;
unsigned int arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 881353875U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2563098565U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 2310025330U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 3136273270U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = 914594049U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -31343388249400045LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 258854300U;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
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
