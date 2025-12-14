#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28709;
unsigned short var_1 = (unsigned short)3914;
int var_2 = -671833197;
long long int var_3 = 4274428629446460960LL;
unsigned int var_4 = 516724951U;
int var_5 = 1336782135;
unsigned long long int var_6 = 8624959999157109631ULL;
unsigned long long int var_8 = 16808684527611929150ULL;
short var_9 = (short)9583;
unsigned short var_10 = (unsigned short)42740;
unsigned short var_11 = (unsigned short)63040;
signed char var_12 = (signed char)124;
int zero = 0;
unsigned long long int var_13 = 14606248351242030659ULL;
unsigned int var_14 = 4093244316U;
short var_15 = (short)7876;
unsigned long long int var_16 = 8044570199505973498ULL;
short var_17 = (short)-23886;
unsigned char arr_0 [16] [16] ;
unsigned long long int arr_1 [16] ;
unsigned long long int arr_2 [16] ;
unsigned short arr_4 [16] [16] [16] ;
unsigned int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 15725020718248216610ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 776621494797166520ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)22406;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 939952959U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
