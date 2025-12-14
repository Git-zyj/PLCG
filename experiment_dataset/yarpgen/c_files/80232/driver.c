#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2368514426U;
unsigned int var_2 = 3181814503U;
signed char var_3 = (signed char)94;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)56;
int var_6 = 2077496834;
signed char var_11 = (signed char)-95;
unsigned long long int var_14 = 10373403981058065918ULL;
_Bool var_15 = (_Bool)0;
int var_16 = -1260024708;
int zero = 0;
int var_17 = -35088382;
unsigned long long int var_18 = 11620745856165566373ULL;
signed char var_19 = (signed char)-106;
long long int var_20 = -662961866231077956LL;
unsigned long long int var_21 = 4664141176393257647ULL;
unsigned long long int arr_0 [15] [15] ;
signed char arr_2 [15] [15] [15] ;
unsigned char arr_4 [15] [15] ;
unsigned long long int arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 7727259156490082721ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 10772224931346567472ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
