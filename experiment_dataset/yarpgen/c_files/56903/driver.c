#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -285688383001074904LL;
unsigned char var_2 = (unsigned char)201;
unsigned char var_3 = (unsigned char)178;
unsigned short var_4 = (unsigned short)34685;
short var_5 = (short)1261;
unsigned char var_6 = (unsigned char)199;
unsigned char var_7 = (unsigned char)108;
short var_8 = (short)-27093;
short var_9 = (short)-29375;
int zero = 0;
unsigned int var_10 = 1899167725U;
int var_11 = 1990663612;
int var_12 = 384389426;
unsigned char var_13 = (unsigned char)67;
signed char var_14 = (signed char)20;
short var_15 = (short)-23671;
unsigned int var_16 = 2974112698U;
long long int arr_0 [15] ;
unsigned long long int arr_1 [15] [15] ;
_Bool arr_2 [15] ;
unsigned long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1370157681775196725LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 1530068249881486675ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 15992390244237722702ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
