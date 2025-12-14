#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 589696148810520612ULL;
unsigned short var_4 = (unsigned short)21840;
unsigned short var_11 = (unsigned short)44517;
unsigned short var_13 = (unsigned short)53641;
unsigned short var_14 = (unsigned short)55741;
int zero = 0;
unsigned long long int var_17 = 9365273408346995727ULL;
unsigned long long int var_18 = 17857351420475829190ULL;
int var_19 = -260626679;
unsigned long long int var_20 = 80801092041148678ULL;
unsigned short var_21 = (unsigned short)63567;
unsigned short var_22 = (unsigned short)1008;
int var_23 = 686881496;
unsigned short var_24 = (unsigned short)60110;
unsigned char arr_0 [20] [20] ;
long long int arr_1 [20] ;
unsigned char arr_2 [20] ;
long long int arr_3 [20] [20] ;
int arr_4 [20] [20] [20] ;
int arr_5 [20] [20] ;
unsigned long long int arr_8 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)205 : (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2141201675228431358LL : 8614973221429769339LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)169 : (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 46088264601644987LL : 3616031954664684568LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2082769129;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 981855306;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 908314934407789397ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
