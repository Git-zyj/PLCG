#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1781482272;
unsigned long long int var_1 = 7174008405799254540ULL;
unsigned long long int var_2 = 10229463151629954309ULL;
unsigned char var_3 = (unsigned char)16;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)55519;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)12263;
unsigned char var_8 = (unsigned char)128;
short var_9 = (short)20870;
int zero = 0;
unsigned char var_12 = (unsigned char)191;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)34;
unsigned int var_16 = 4230155973U;
unsigned int arr_2 [25] [25] ;
unsigned char arr_3 [25] [25] ;
unsigned int arr_4 [25] [25] ;
unsigned short arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 1457700085U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 1518721312U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)46680;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
