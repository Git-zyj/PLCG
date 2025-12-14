#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60515;
unsigned char var_2 = (unsigned char)240;
unsigned long long int var_4 = 10879623532288462124ULL;
signed char var_6 = (signed char)-43;
unsigned short var_7 = (unsigned short)38937;
unsigned short var_8 = (unsigned short)19458;
_Bool var_10 = (_Bool)0;
short var_13 = (short)-2407;
long long int var_15 = -2067645603874873345LL;
unsigned short var_19 = (unsigned short)35960;
int zero = 0;
short var_20 = (short)-22580;
int var_21 = 1377089997;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)26;
long long int var_24 = 1965296304785703910LL;
unsigned char var_25 = (unsigned char)199;
long long int arr_0 [17] ;
unsigned short arr_1 [17] ;
signed char arr_7 [11] ;
int arr_4 [17] ;
unsigned char arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -2676334431685190493LL : 3146488692106849406LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)5159;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -834464907 : -1163045101;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)226 : (unsigned char)67;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
