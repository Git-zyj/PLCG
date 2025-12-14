#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7395574262790195244LL;
long long int var_1 = -6109407169746751299LL;
unsigned long long int var_2 = 300165409295633425ULL;
short var_3 = (short)-20097;
unsigned long long int var_4 = 17927113306022798232ULL;
short var_5 = (short)-21520;
unsigned short var_6 = (unsigned short)62767;
unsigned char var_7 = (unsigned char)249;
int var_9 = -807187113;
int zero = 0;
unsigned long long int var_10 = 6980177253558747214ULL;
signed char var_11 = (signed char)-86;
int var_12 = -674786620;
unsigned char var_13 = (unsigned char)120;
_Bool var_14 = (_Bool)0;
unsigned int arr_0 [19] ;
long long int arr_1 [19] ;
unsigned char arr_2 [19] ;
_Bool arr_3 [19] [19] [19] ;
unsigned long long int arr_4 [19] ;
signed char arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3112391859U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -7642508759120732623LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 12636887407805733155ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)97;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
