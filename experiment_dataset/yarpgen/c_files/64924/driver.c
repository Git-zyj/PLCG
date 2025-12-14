#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27957;
_Bool var_2 = (_Bool)0;
long long int var_3 = -8894652185225056156LL;
unsigned int var_4 = 2069856570U;
long long int var_5 = 8928733849021667241LL;
unsigned char var_6 = (unsigned char)154;
unsigned char var_7 = (unsigned char)202;
int var_8 = -56136086;
unsigned int var_9 = 3242487514U;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 11420918674196580437ULL;
unsigned int var_12 = 255579631U;
unsigned long long int var_13 = 12586289602826522843ULL;
_Bool var_14 = (_Bool)1;
unsigned char arr_0 [22] ;
int arr_1 [22] ;
unsigned char arr_2 [22] ;
long long int arr_3 [22] [22] ;
unsigned int arr_4 [22] [22] ;
unsigned short arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -509349562;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 8944290310251390155LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 3502002088U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)31262;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
