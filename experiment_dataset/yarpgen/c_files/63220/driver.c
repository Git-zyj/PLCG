#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2575996421U;
int var_1 = 1604750953;
unsigned short var_2 = (unsigned short)60460;
long long int var_5 = -6121730386884810674LL;
int var_6 = 411258259;
unsigned int var_7 = 1194153912U;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)152;
int zero = 0;
short var_10 = (short)-11774;
unsigned int var_11 = 553258941U;
long long int var_12 = -963484282019330402LL;
unsigned int var_13 = 1924657304U;
short arr_0 [14] ;
int arr_1 [14] [14] ;
unsigned int arr_2 [14] ;
unsigned long long int arr_3 [14] [14] ;
unsigned long long int arr_4 [14] ;
long long int arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-19590;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -1965346052;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2336357617U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 10389787369045894695ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 254381575444459099ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = -8638361629332888433LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
