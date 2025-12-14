#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1447028350;
_Bool var_8 = (_Bool)1;
unsigned long long int var_12 = 8019449659348026782ULL;
unsigned long long int var_13 = 426121273698049327ULL;
int var_15 = 225663852;
int zero = 0;
unsigned long long int var_16 = 13722186756992917110ULL;
int var_17 = 2086698204;
unsigned int var_18 = 3514571491U;
long long int var_19 = 539457249352958533LL;
unsigned char var_20 = (unsigned char)243;
short var_21 = (short)10458;
signed char var_22 = (signed char)5;
_Bool var_23 = (_Bool)1;
_Bool arr_0 [25] [25] ;
unsigned short arr_1 [25] [25] ;
unsigned long long int arr_3 [25] ;
signed char arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)41664;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3326909266301222207ULL : 4877401522478405354ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-4 : (signed char)-100;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
