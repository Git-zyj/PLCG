#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)13;
signed char var_2 = (signed char)1;
signed char var_5 = (signed char)-33;
unsigned long long int var_6 = 10902031530544584260ULL;
signed char var_10 = (signed char)41;
int zero = 0;
short var_20 = (short)-30149;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)146;
short var_23 = (short)-29683;
unsigned long long int var_24 = 15435870123915535602ULL;
unsigned short arr_1 [25] ;
long long int arr_4 [25] ;
unsigned short arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)14763;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -6613917152240715039LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)40526;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
