#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2310962601U;
short var_3 = (short)-20223;
signed char var_4 = (signed char)104;
long long int var_5 = 1858610490644030631LL;
long long int var_6 = -7848116098951990925LL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-14667;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -1931400855;
int var_12 = -182976537;
unsigned short var_13 = (unsigned short)20967;
unsigned char var_14 = (unsigned char)58;
unsigned int var_15 = 1492531524U;
short var_16 = (short)-32314;
unsigned long long int arr_0 [22] ;
unsigned char arr_1 [22] [22] ;
long long int arr_2 [22] [22] ;
short arr_3 [22] ;
long long int arr_6 [24] [24] ;
short arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1846899499000262179ULL : 12882886943849490773ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -7888612938479523371LL : -1281628738568452683LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-24672 : (short)-31100;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = -2949803713508907247LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-4294 : (short)31847;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
