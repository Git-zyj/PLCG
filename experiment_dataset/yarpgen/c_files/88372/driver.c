#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8334718755470784008LL;
unsigned char var_5 = (unsigned char)185;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 2466899532U;
int zero = 0;
long long int var_14 = -9035623794658674700LL;
int var_15 = 1035239835;
signed char var_16 = (signed char)10;
int var_17 = -874359273;
int var_18 = -1472684270;
unsigned short arr_0 [12] ;
unsigned int arr_1 [12] ;
unsigned short arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)63629;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3684327090U : 2259794009U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)22065 : (unsigned short)23398;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
