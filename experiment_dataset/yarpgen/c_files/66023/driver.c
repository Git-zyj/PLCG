#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
int var_2 = -1748290887;
unsigned char var_5 = (unsigned char)151;
unsigned char var_6 = (unsigned char)146;
_Bool var_7 = (_Bool)1;
int var_9 = 2126516922;
unsigned int var_10 = 1904966344U;
short var_11 = (short)-1027;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 1156265548500483027ULL;
unsigned int var_14 = 3075163768U;
unsigned int var_15 = 3037730146U;
signed char var_16 = (signed char)-17;
unsigned char var_17 = (unsigned char)171;
unsigned long long int arr_4 [14] [14] [14] ;
unsigned long long int arr_6 [18] [18] ;
unsigned char arr_9 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 15737727189174848508ULL : 3134031113857729775ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 16428710123961982987ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)238;
}

void checksum() {
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
