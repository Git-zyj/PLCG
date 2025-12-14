#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 113798331U;
short var_1 = (short)-29412;
unsigned long long int var_2 = 8860454278666520063ULL;
unsigned short var_4 = (unsigned short)52939;
long long int var_5 = 3936791284477759045LL;
_Bool var_6 = (_Bool)1;
unsigned int var_9 = 1155628020U;
unsigned short var_10 = (unsigned short)21795;
unsigned char var_11 = (unsigned char)93;
unsigned int var_13 = 4285914974U;
int zero = 0;
long long int var_14 = 2154016965581314895LL;
unsigned long long int var_15 = 12863295316492198612ULL;
long long int var_16 = -7676052165384391687LL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)45370;
unsigned char arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned long long int arr_2 [10] ;
long long int arr_3 [10] ;
int arr_4 [10] ;
signed char arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 16915623625121185210ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 8402384171206949226ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -4102384166322811702LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1146345564;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)82;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
