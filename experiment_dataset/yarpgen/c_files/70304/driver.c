#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3361403103502461828LL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)42;
short var_7 = (short)26720;
_Bool var_8 = (_Bool)0;
long long int var_9 = 8830797960042375763LL;
signed char var_10 = (signed char)-116;
short var_11 = (short)18388;
unsigned int var_12 = 3903631884U;
int zero = 0;
unsigned char var_13 = (unsigned char)249;
short var_14 = (short)-14042;
unsigned char var_15 = (unsigned char)156;
signed char var_16 = (signed char)43;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)165;
_Bool var_19 = (_Bool)0;
long long int var_20 = 694402520615080947LL;
unsigned char arr_0 [22] ;
int arr_2 [25] [25] ;
unsigned char arr_3 [25] ;
_Bool arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 1576148694;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
