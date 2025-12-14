#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6348505670658787969LL;
unsigned char var_2 = (unsigned char)31;
signed char var_5 = (signed char)-17;
unsigned long long int var_6 = 11707310564111913250ULL;
short var_7 = (short)-21335;
unsigned int var_8 = 1943812277U;
unsigned long long int var_10 = 5259202791456850223ULL;
int zero = 0;
unsigned long long int var_11 = 5684189444879688142ULL;
unsigned char var_12 = (unsigned char)239;
unsigned long long int var_13 = 12124025795726432521ULL;
short var_14 = (short)-26796;
short var_15 = (short)693;
signed char var_16 = (signed char)65;
short var_17 = (short)-13134;
signed char var_18 = (signed char)0;
int arr_1 [18] ;
int arr_2 [18] ;
unsigned char arr_3 [18] [18] ;
unsigned short arr_4 [18] [18] [18] ;
long long int arr_5 [18] [18] [18] ;
_Bool arr_6 [18] ;
int arr_7 [18] [18] ;
_Bool arr_8 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -1274534377;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1581155923;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)46580 : (unsigned short)63019;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -9115513446156685772LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 2032181235;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
