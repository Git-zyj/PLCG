#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 851690616U;
unsigned long long int var_5 = 15411099934430458290ULL;
unsigned int var_7 = 2525931153U;
int var_8 = -651970983;
unsigned long long int var_9 = 11658199635954080075ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)255;
unsigned char var_13 = (unsigned char)166;
unsigned char var_14 = (unsigned char)126;
long long int var_15 = -6642149036826527705LL;
unsigned char arr_0 [17] ;
short arr_1 [17] ;
long long int arr_2 [17] ;
unsigned long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)27027;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 6396079675142192246LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 9250123705684077555ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
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
