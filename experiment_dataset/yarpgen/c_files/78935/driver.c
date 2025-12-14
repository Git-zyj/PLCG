#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
unsigned short var_2 = (unsigned short)25876;
short var_3 = (short)-21406;
short var_4 = (short)-20913;
unsigned char var_5 = (unsigned char)20;
unsigned long long int var_6 = 15338951141840551589ULL;
int var_9 = -936667636;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)106;
_Bool var_12 = (_Bool)0;
long long int var_13 = 1334357824596102200LL;
int zero = 0;
int var_16 = -1848740802;
signed char var_17 = (signed char)-39;
unsigned short var_18 = (unsigned short)52495;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 14315774673227067627ULL;
int var_21 = -384663417;
signed char var_22 = (signed char)73;
int arr_2 [21] ;
unsigned long long int arr_3 [21] ;
unsigned long long int arr_4 [21] ;
_Bool arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -235810636;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 635135810947338449ULL : 6976797281331373038ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 9362959200094367810ULL : 8739150051863584142ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
