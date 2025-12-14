#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60491;
unsigned long long int var_4 = 1256684704446213505ULL;
unsigned char var_9 = (unsigned char)130;
short var_12 = (short)4885;
int zero = 0;
long long int var_16 = -1031966986676289786LL;
unsigned int var_17 = 1352230980U;
unsigned int var_18 = 3650610525U;
signed char var_19 = (signed char)47;
signed char var_20 = (signed char)-73;
unsigned short var_21 = (unsigned short)48295;
long long int var_22 = -396550629257253442LL;
signed char arr_0 [15] [15] ;
unsigned long long int arr_2 [15] ;
unsigned short arr_4 [15] ;
long long int arr_12 [15] [15] [15] [15] [15] [15] [15] ;
signed char arr_13 [15] ;
unsigned long long int arr_16 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 15393072946990021540ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23045 : (unsigned short)58430;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 7485366100647036319LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 3947783534336057163ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
