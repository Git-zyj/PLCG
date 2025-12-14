#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12377805592231826984ULL;
signed char var_1 = (signed char)92;
unsigned short var_2 = (unsigned short)5134;
long long int var_3 = -4472324120835198936LL;
unsigned long long int var_4 = 6754268501985603691ULL;
signed char var_5 = (signed char)-43;
unsigned short var_6 = (unsigned short)11487;
signed char var_8 = (signed char)104;
unsigned short var_9 = (unsigned short)38228;
int zero = 0;
signed char var_10 = (signed char)-20;
unsigned short var_11 = (unsigned short)37198;
unsigned int var_12 = 4035907140U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)23007;
unsigned short var_15 = (unsigned short)61517;
long long int var_16 = 1228366546390711900LL;
unsigned short var_17 = (unsigned short)1792;
unsigned char arr_0 [16] ;
short arr_1 [16] ;
signed char arr_2 [16] [16] [16] ;
short arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)10955;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (short)4943;
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
