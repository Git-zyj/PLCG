#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -166923632;
long long int var_6 = 6712870580777714693LL;
short var_9 = (short)-18402;
short var_12 = (short)16280;
signed char var_14 = (signed char)109;
signed char var_16 = (signed char)98;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)27639;
unsigned long long int arr_0 [22] ;
int arr_1 [22] ;
unsigned short arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 13974522757627760084ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -1216177467;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)25872;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
