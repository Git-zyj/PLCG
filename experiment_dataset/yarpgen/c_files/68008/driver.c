#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2294376707U;
_Bool var_1 = (_Bool)0;
unsigned char var_4 = (unsigned char)169;
signed char var_6 = (signed char)92;
long long int var_7 = 6525323974572545768LL;
signed char var_11 = (signed char)-103;
int zero = 0;
unsigned long long int var_13 = 3287603651712385912ULL;
signed char var_14 = (signed char)52;
signed char var_15 = (signed char)-54;
int var_16 = -1092643504;
unsigned char var_17 = (unsigned char)214;
long long int var_18 = -5832596040629232148LL;
signed char var_19 = (signed char)-100;
int var_20 = -1800073090;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-70;
signed char arr_1 [13] [13] ;
signed char arr_2 [13] [13] [13] ;
signed char arr_4 [13] [13] [13] ;
_Bool arr_9 [13] [13] [13] ;
unsigned short arr_13 [13] ;
short arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (unsigned short)48741;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)-28469;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
