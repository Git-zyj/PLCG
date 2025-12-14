#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)40;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-10348;
signed char var_5 = (signed char)52;
int var_7 = -1407584683;
unsigned short var_8 = (unsigned short)32452;
unsigned short var_9 = (unsigned short)33616;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)136;
int var_12 = -1197287004;
unsigned int var_13 = 1349957258U;
_Bool var_14 = (_Bool)0;
int var_15 = 909384318;
short var_16 = (short)28855;
long long int var_17 = 3641213481425238144LL;
unsigned long long int var_18 = 15623002510203792406ULL;
unsigned short var_19 = (unsigned short)15311;
unsigned int var_20 = 3614953617U;
_Bool var_21 = (_Bool)1;
unsigned long long int arr_1 [16] [16] ;
unsigned long long int arr_3 [24] ;
signed char arr_4 [24] [24] ;
int arr_6 [12] ;
unsigned int arr_7 [18] [18] ;
_Bool arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 4425036003690464944ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 13405537377424211429ULL : 7686375061484090457ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 2071779529;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 2729991442U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
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
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
