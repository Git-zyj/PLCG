#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)35;
_Bool var_4 = (_Bool)1;
unsigned short var_12 = (unsigned short)27358;
int zero = 0;
unsigned long long int var_14 = 7035063187342427160ULL;
unsigned int var_15 = 2453686534U;
int var_16 = 830782421;
int var_17 = 423065734;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 4559610701258362975ULL;
unsigned int var_20 = 1891769803U;
unsigned char var_21 = (unsigned char)43;
signed char var_22 = (signed char)124;
signed char var_23 = (signed char)15;
signed char var_24 = (signed char)118;
unsigned char var_25 = (unsigned char)73;
long long int arr_0 [20] ;
signed char arr_1 [20] ;
_Bool arr_2 [10] ;
unsigned char arr_3 [10] ;
long long int arr_4 [10] ;
unsigned long long int arr_8 [10] [10] ;
unsigned short arr_9 [10] ;
unsigned char arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 8147273073179253936LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-10 : (signed char)-64;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -1414600460208170091LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 1810524985518969816ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned short)15410;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)43;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
