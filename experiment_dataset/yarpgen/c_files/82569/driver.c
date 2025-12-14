#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)138;
long long int var_7 = -1547227885755908955LL;
short var_8 = (short)21803;
unsigned long long int var_10 = 13358218463178385854ULL;
short var_11 = (short)-6280;
int zero = 0;
int var_15 = 1081548683;
unsigned int var_16 = 2307048007U;
unsigned long long int var_17 = 1502744334709248921ULL;
unsigned char var_18 = (unsigned char)133;
_Bool var_19 = (_Bool)0;
int var_20 = 1125389654;
long long int var_21 = -6526791285525026573LL;
unsigned char arr_3 [25] ;
long long int arr_4 [25] [25] ;
unsigned short arr_5 [25] ;
long long int arr_6 [25] [25] [25] ;
unsigned char arr_7 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 5330170163790921704LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)38383;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -8688259824843598072LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)95;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
