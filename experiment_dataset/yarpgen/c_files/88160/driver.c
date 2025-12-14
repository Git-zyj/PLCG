#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20942;
int var_2 = -1550526909;
unsigned short var_6 = (unsigned short)2443;
unsigned int var_7 = 4009700531U;
int var_9 = -2041331148;
unsigned int var_10 = 3583469191U;
int var_11 = -2023980997;
int zero = 0;
short var_12 = (short)10331;
int var_13 = 316477581;
long long int var_14 = -4508009996293864199LL;
int var_15 = -1566125954;
unsigned short var_16 = (unsigned short)43453;
int arr_0 [17] ;
int arr_1 [17] [17] ;
unsigned short arr_2 [17] ;
_Bool arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -836458742;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -530474881;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)15425;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
