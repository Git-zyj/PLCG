#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
signed char var_2 = (signed char)-57;
short var_3 = (short)7532;
unsigned int var_4 = 2967508986U;
unsigned long long int var_5 = 16148405484310309901ULL;
unsigned long long int var_6 = 13185095801071831353ULL;
short var_8 = (short)-17541;
int zero = 0;
long long int var_13 = -5966997923991038768LL;
short var_14 = (short)-25350;
unsigned char var_15 = (unsigned char)22;
unsigned int var_16 = 41561321U;
unsigned long long int var_17 = 44534162963924213ULL;
unsigned int var_18 = 3883796538U;
unsigned char arr_1 [21] [21] ;
unsigned char arr_4 [21] ;
signed char arr_7 [21] ;
short arr_9 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-11268;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
