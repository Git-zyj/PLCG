#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1541430662;
unsigned long long int var_3 = 4189023813389911864ULL;
unsigned long long int var_5 = 4440433366149982349ULL;
unsigned char var_9 = (unsigned char)167;
long long int var_12 = 3659064639295088749LL;
int zero = 0;
signed char var_13 = (signed char)-50;
long long int var_14 = 8979171213045088183LL;
unsigned long long int var_15 = 14971135801148239121ULL;
signed char var_16 = (signed char)97;
long long int var_17 = 5533521981396652343LL;
unsigned short var_18 = (unsigned short)41113;
signed char var_19 = (signed char)-90;
_Bool arr_3 [23] ;
signed char arr_8 [23] [23] [23] ;
unsigned long long int arr_10 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)93 : (signed char)24;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 7875107533583554906ULL : 7118869464389139002ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
