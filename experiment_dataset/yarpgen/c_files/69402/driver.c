#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-13;
unsigned short var_2 = (unsigned short)20422;
unsigned char var_10 = (unsigned char)47;
int var_11 = -1942955735;
short var_14 = (short)27540;
_Bool var_15 = (_Bool)1;
int var_16 = 1144661578;
int var_19 = -1566902368;
int zero = 0;
unsigned short var_20 = (unsigned short)33696;
short var_21 = (short)-27380;
_Bool var_22 = (_Bool)1;
long long int var_23 = 8055895298946250773LL;
unsigned char var_24 = (unsigned char)200;
unsigned short var_25 = (unsigned short)50617;
unsigned short arr_1 [15] [15] ;
int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)50958;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 1491196688;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
