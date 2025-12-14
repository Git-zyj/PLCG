#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
unsigned short var_1 = (unsigned short)45391;
unsigned char var_2 = (unsigned char)143;
unsigned long long int var_4 = 2921557907615993917ULL;
short var_7 = (short)16951;
unsigned int var_8 = 3804085458U;
unsigned short var_9 = (unsigned short)27880;
int var_12 = -1632376249;
_Bool var_13 = (_Bool)0;
long long int var_14 = -1069902712009424524LL;
int zero = 0;
signed char var_16 = (signed char)-2;
int var_17 = 202863424;
unsigned short var_18 = (unsigned short)25105;
signed char var_19 = (signed char)112;
_Bool var_20 = (_Bool)0;
long long int var_21 = -6884251563645842864LL;
long long int var_22 = -2469920452642058073LL;
unsigned int var_23 = 3145494305U;
unsigned char var_24 = (unsigned char)6;
unsigned long long int arr_0 [14] ;
unsigned short arr_1 [14] [14] ;
unsigned short arr_4 [20] ;
long long int arr_5 [20] [20] ;
signed char arr_6 [20] ;
_Bool arr_7 [20] ;
long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2670307240230675424ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)47012;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)34034;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -3719262662121732262LL : -4099340972671959168LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)119 : (signed char)-98;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2288083516916358163LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
