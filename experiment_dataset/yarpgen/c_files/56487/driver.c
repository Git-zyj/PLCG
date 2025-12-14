#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1627534553;
unsigned char var_2 = (unsigned char)9;
int var_3 = -692144584;
unsigned short var_4 = (unsigned short)45114;
short var_5 = (short)28744;
unsigned char var_6 = (unsigned char)218;
short var_7 = (short)-12156;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)59654;
int zero = 0;
int var_10 = -1600831389;
int var_11 = -743329225;
unsigned long long int var_12 = 7788324110287168619ULL;
int var_13 = 13825411;
unsigned short var_14 = (unsigned short)40011;
int var_15 = -230387597;
signed char arr_0 [24] ;
unsigned int arr_1 [24] ;
_Bool arr_6 [24] ;
unsigned long long int arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 3765794742U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 14181854465728113906ULL : 6579874664925151975ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
