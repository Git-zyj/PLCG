#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 16560441291901173950ULL;
short var_2 = (short)8750;
unsigned char var_3 = (unsigned char)249;
int var_4 = 1171878263;
unsigned long long int var_5 = 5693719048464845199ULL;
short var_7 = (short)16532;
signed char var_8 = (signed char)-51;
short var_9 = (short)-4564;
long long int var_11 = 5036004855940693270LL;
signed char var_13 = (signed char)-52;
unsigned char var_14 = (unsigned char)152;
int zero = 0;
short var_16 = (short)28304;
unsigned long long int var_17 = 15231431166469463958ULL;
unsigned char var_18 = (unsigned char)138;
unsigned char var_19 = (unsigned char)110;
short var_20 = (short)14862;
short arr_3 [12] [12] ;
long long int arr_5 [12] [12] [12] ;
short arr_6 [12] [12] [12] ;
short arr_11 [25] ;
_Bool arr_12 [25] ;
short arr_10 [12] ;
unsigned int arr_13 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)31095 : (short)-496;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7337619194706271439LL : 4279593807558060703LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)2123;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (short)10113;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)27457 : (short)27645;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = 4093690949U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
