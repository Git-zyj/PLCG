#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2106812344385411987LL;
long long int var_1 = 4968657914346783580LL;
long long int var_2 = -8994943368122552025LL;
signed char var_3 = (signed char)-85;
unsigned int var_4 = 3820268778U;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 15158532218534982957ULL;
unsigned short var_17 = (unsigned short)566;
int arr_1 [17] ;
unsigned char arr_3 [17] [17] ;
short arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1502919681;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-16127;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
