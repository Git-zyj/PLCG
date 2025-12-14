#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 4342816241768293689LL;
unsigned short var_3 = (unsigned short)61809;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-56;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)86;
signed char var_11 = (signed char)91;
unsigned short var_13 = (unsigned short)41438;
int zero = 0;
unsigned short var_14 = (unsigned short)51815;
unsigned int var_15 = 1148407458U;
unsigned char var_16 = (unsigned char)7;
unsigned int var_17 = 2853527646U;
unsigned int var_18 = 2613963828U;
int var_19 = -1222461006;
unsigned int arr_0 [12] [12] ;
int arr_2 [12] [12] ;
_Bool arr_3 [12] [12] [12] ;
unsigned int arr_4 [22] ;
signed char arr_7 [22] ;
unsigned char arr_8 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 3350208354U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 1711356201;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1133433993U : 3180318603U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)23;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
