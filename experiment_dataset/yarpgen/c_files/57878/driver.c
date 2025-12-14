#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 176959221U;
_Bool var_3 = (_Bool)0;
short var_7 = (short)-16214;
unsigned int var_10 = 3954398535U;
unsigned long long int var_13 = 13010472270826715519ULL;
int zero = 0;
unsigned long long int var_14 = 16117019284531877114ULL;
unsigned short var_15 = (unsigned short)63737;
unsigned char var_16 = (unsigned char)254;
unsigned long long int arr_0 [11] ;
unsigned long long int arr_1 [11] ;
unsigned short arr_2 [11] ;
unsigned char arr_3 [11] ;
unsigned long long int arr_5 [11] [11] ;
unsigned short arr_6 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 14071396028219126134ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 12089851116742785070ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)46681;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 9628560673747329262ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)46772;
}

void checksum() {
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
