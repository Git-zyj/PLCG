#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11137903983170305146ULL;
unsigned long long int var_1 = 4334646739775506774ULL;
unsigned short var_2 = (unsigned short)34853;
unsigned long long int var_3 = 14242723548855378177ULL;
signed char var_4 = (signed char)-23;
_Bool var_5 = (_Bool)0;
short var_6 = (short)20454;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 747339843U;
signed char var_9 = (signed char)88;
int zero = 0;
long long int var_11 = 6321791808279008581LL;
unsigned char var_12 = (unsigned char)12;
unsigned int var_13 = 820131699U;
unsigned int var_14 = 1904865752U;
unsigned char var_15 = (unsigned char)8;
unsigned int var_16 = 2225025851U;
unsigned char arr_2 [14] ;
unsigned char arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)122 : (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)152 : (unsigned char)228;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
