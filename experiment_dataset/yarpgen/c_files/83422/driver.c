#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22637;
unsigned long long int var_2 = 2047913986988031703ULL;
unsigned char var_4 = (unsigned char)185;
long long int var_6 = -806147328448717423LL;
signed char var_8 = (signed char)105;
short var_9 = (short)-11781;
long long int var_11 = -8135596365300527617LL;
int zero = 0;
signed char var_13 = (signed char)64;
unsigned int var_14 = 2853944999U;
unsigned long long int var_15 = 3069679720519489529ULL;
int var_16 = 1041523807;
unsigned char var_17 = (unsigned char)177;
unsigned short var_18 = (unsigned short)29365;
signed char var_19 = (signed char)66;
unsigned char var_20 = (unsigned char)229;
signed char var_21 = (signed char)81;
int arr_0 [17] ;
_Bool arr_1 [17] ;
signed char arr_2 [17] [17] ;
unsigned int arr_4 [13] [13] ;
unsigned char arr_5 [13] ;
unsigned long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 548232104 : -689055022;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)94 : (signed char)-93;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 1741891764U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 16330040505862420566ULL : 7565984915677274979ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
