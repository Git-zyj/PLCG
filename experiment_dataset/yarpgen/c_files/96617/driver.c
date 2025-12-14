#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1656594984;
long long int var_4 = -113765150491886400LL;
unsigned short var_6 = (unsigned short)55131;
unsigned short var_7 = (unsigned short)28207;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)123;
int var_13 = -2079049487;
short var_14 = (short)-15142;
unsigned long long int var_15 = 4881108396154764918ULL;
unsigned char var_16 = (unsigned char)47;
unsigned long long int var_17 = 2224890064829745908ULL;
short arr_0 [10] [10] ;
unsigned int arr_1 [10] [10] ;
short arr_2 [10] ;
int arr_4 [24] ;
unsigned long long int arr_5 [24] ;
_Bool arr_3 [10] ;
short arr_10 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-12266;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 173434856U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-32154;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -312180732;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 10434597605881978968ULL : 16916663955819516219ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (short)-4476;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
