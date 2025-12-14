#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)210;
long long int var_3 = -4395694894342101737LL;
signed char var_5 = (signed char)121;
long long int var_6 = -5663242465044144266LL;
unsigned char var_7 = (unsigned char)229;
signed char var_8 = (signed char)93;
signed char var_9 = (signed char)31;
unsigned char var_10 = (unsigned char)78;
int zero = 0;
signed char var_17 = (signed char)-78;
signed char var_18 = (signed char)89;
unsigned char var_19 = (unsigned char)66;
unsigned char var_20 = (unsigned char)39;
signed char var_21 = (signed char)4;
unsigned char var_22 = (unsigned char)137;
long long int var_23 = -6409536035820479806LL;
signed char var_24 = (signed char)-24;
signed char arr_0 [22] ;
signed char arr_1 [22] ;
signed char arr_2 [22] ;
unsigned long long int arr_19 [23] [23] [23] ;
unsigned char arr_13 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 8511766664570041654ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)100;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
