#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18204691092067478883ULL;
unsigned short var_1 = (unsigned short)38367;
long long int var_2 = 9072616856869816883LL;
signed char var_4 = (signed char)116;
unsigned short var_5 = (unsigned short)43036;
unsigned short var_6 = (unsigned short)63494;
signed char var_7 = (signed char)86;
int var_8 = -1701529572;
long long int var_9 = -5829414093459670107LL;
int zero = 0;
int var_10 = 456752512;
unsigned short var_11 = (unsigned short)48042;
unsigned long long int var_12 = 17112462775932993101ULL;
signed char var_13 = (signed char)88;
unsigned int var_14 = 352710104U;
long long int var_15 = 302689045209496398LL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)69;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1048371448U;
short var_20 = (short)21422;
unsigned int arr_0 [20] ;
unsigned long long int arr_1 [20] [20] ;
unsigned short arr_4 [13] ;
_Bool arr_5 [13] ;
_Bool arr_2 [20] ;
signed char arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 3270090089U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 10382754434448652253ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)55724;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-42 : (signed char)-116;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
