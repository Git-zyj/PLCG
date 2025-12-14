#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4752230374597468605LL;
long long int var_1 = 265194787104520620LL;
long long int var_2 = -3686260019852628744LL;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)158;
unsigned short var_8 = (unsigned short)35014;
long long int var_9 = 1970064105470276331LL;
int zero = 0;
unsigned char var_10 = (unsigned char)191;
unsigned char var_11 = (unsigned char)56;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)106;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)239;
long long int var_16 = -907405433499669323LL;
int var_17 = 1245706585;
long long int arr_0 [14] [14] ;
unsigned int arr_3 [14] [14] [14] ;
int arr_4 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = -15294827598362022LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 523338151U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 696280988;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
