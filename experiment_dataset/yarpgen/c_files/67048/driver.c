#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)32;
short var_1 = (short)4880;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)191;
unsigned char var_7 = (unsigned char)223;
short var_8 = (short)-14609;
int zero = 0;
short var_10 = (short)15880;
unsigned char var_11 = (unsigned char)71;
long long int var_12 = -6690642196523938860LL;
long long int var_13 = 3853761938168230030LL;
long long int var_14 = -6632939365971546839LL;
unsigned char arr_1 [15] ;
_Bool arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
