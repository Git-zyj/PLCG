#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53270;
short var_1 = (short)-2065;
short var_2 = (short)-13224;
unsigned int var_3 = 3361106055U;
signed char var_4 = (signed char)-66;
short var_5 = (short)-7672;
unsigned int var_6 = 2213113620U;
unsigned int var_7 = 3283071133U;
unsigned short var_8 = (unsigned short)15371;
int var_9 = -24432958;
unsigned int var_10 = 3683286556U;
int zero = 0;
unsigned int var_11 = 2355508319U;
unsigned long long int var_12 = 7650249403039963921ULL;
unsigned char var_13 = (unsigned char)165;
unsigned int var_14 = 2034134005U;
unsigned int var_15 = 824485968U;
unsigned char var_16 = (unsigned char)64;
unsigned long long int var_17 = 18336224782702793574ULL;
unsigned short arr_0 [15] ;
long long int arr_1 [15] [15] ;
int arr_2 [15] ;
unsigned long long int arr_4 [15] ;
int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47899 : (unsigned short)12582;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 6557295615110171476LL : 3837417645983696001LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 924342205;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 6251508832969877386ULL : 15166134821894581153ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 260358642 : 492093054;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
