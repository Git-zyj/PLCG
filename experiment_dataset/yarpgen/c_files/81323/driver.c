#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
int var_1 = 733715024;
unsigned char var_2 = (unsigned char)63;
unsigned long long int var_4 = 12721230537635860291ULL;
_Bool var_7 = (_Bool)0;
signed char var_14 = (signed char)-99;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)28006;
unsigned int var_18 = 409554874U;
signed char var_19 = (signed char)68;
unsigned char var_20 = (unsigned char)57;
unsigned int var_21 = 2836294698U;
unsigned char var_22 = (unsigned char)81;
int var_23 = 140097250;
int var_24 = -2093896390;
_Bool arr_4 [11] ;
unsigned int arr_13 [11] ;
unsigned long long int arr_14 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 2862570537U : 274421104U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 12041555110309016054ULL : 3798070669502715618ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
