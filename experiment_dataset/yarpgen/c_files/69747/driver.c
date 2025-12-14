#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)122;
signed char var_3 = (signed char)-49;
int var_4 = -71646650;
unsigned char var_6 = (unsigned char)177;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 3075856061404825770ULL;
unsigned long long int var_11 = 2246263213496811512ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)29795;
short var_14 = (short)25018;
long long int var_15 = -5047331814346761213LL;
unsigned long long int var_16 = 4759021036130104884ULL;
unsigned short var_17 = (unsigned short)63098;
unsigned long long int var_18 = 16219779856778253562ULL;
unsigned long long int arr_0 [17] [17] ;
signed char arr_1 [17] [17] ;
unsigned long long int arr_2 [17] ;
long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 10259864135573166653ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 18290058824836149257ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -4987766272546825469LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
