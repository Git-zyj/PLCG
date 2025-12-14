#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)9;
int var_4 = -648398421;
signed char var_5 = (signed char)42;
unsigned int var_7 = 4181009703U;
unsigned long long int var_9 = 1112120166102746205ULL;
long long int var_10 = -4195316883126628394LL;
unsigned char var_11 = (unsigned char)4;
signed char var_12 = (signed char)-112;
unsigned long long int var_15 = 9742194656642808674ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)52808;
unsigned short var_21 = (unsigned short)7090;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-110;
signed char var_25 = (signed char)51;
_Bool var_26 = (_Bool)1;
short var_27 = (short)-21091;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)0;
int var_30 = -8329767;
unsigned long long int arr_0 [15] ;
signed char arr_1 [15] ;
_Bool arr_2 [15] ;
_Bool arr_5 [18] ;
long long int arr_6 [18] ;
unsigned char arr_7 [18] [18] ;
signed char arr_8 [18] ;
long long int arr_9 [18] ;
signed char arr_3 [15] ;
unsigned long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 17727874599972576623ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 3084710128168327551LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 8411267561783224473LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 12800146317068249791ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
