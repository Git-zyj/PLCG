#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7014478425243830854LL;
signed char var_1 = (signed char)-58;
short var_8 = (short)1496;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)24;
short var_14 = (short)21409;
int var_15 = -1188918473;
long long int var_17 = -3406206768813290665LL;
int zero = 0;
unsigned int var_20 = 710784938U;
unsigned char var_21 = (unsigned char)150;
short var_22 = (short)-19894;
unsigned long long int var_23 = 9169570743889447314ULL;
long long int var_24 = -3266839429657257430LL;
_Bool var_25 = (_Bool)1;
unsigned int arr_1 [14] [14] ;
unsigned short arr_2 [14] ;
unsigned long long int arr_4 [14] ;
short arr_5 [14] [14] ;
unsigned short arr_6 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 281498009U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12671 : (unsigned short)47603;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 5190792167086724654ULL : 13120932631876803586ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-17878 : (short)15646;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)9385;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
