#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7565775571330455508ULL;
int var_2 = -1753795754;
unsigned int var_4 = 1831069483U;
unsigned long long int var_5 = 3641400576239775262ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 13305074956427957987ULL;
unsigned int var_8 = 3966150481U;
unsigned long long int var_9 = 12119835231199708479ULL;
unsigned long long int var_11 = 1371098349448997943ULL;
int var_12 = 1887596403;
int zero = 0;
long long int var_13 = -2566491706318982817LL;
unsigned long long int var_14 = 13351175956814851772ULL;
unsigned long long int var_15 = 10753519519558265658ULL;
int var_16 = 338464518;
unsigned short var_17 = (unsigned short)12610;
unsigned short var_18 = (unsigned short)35699;
long long int var_19 = 7863250817473347823LL;
unsigned int var_20 = 3503794801U;
short var_21 = (short)-7606;
unsigned long long int var_22 = 5882233491454507833ULL;
unsigned int var_23 = 1280600111U;
signed char var_24 = (signed char)23;
short arr_1 [13] ;
unsigned int arr_2 [13] [13] [13] ;
int arr_6 [13] [13] ;
unsigned long long int arr_17 [13] [13] ;
unsigned int arr_18 [13] [13] [13] ;
long long int arr_21 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-24718;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1255852211U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = -1613739624;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 12217521635393983764ULL : 4020017333776390918ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1133007342U : 3688989055U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? -4258646533382066347LL : -4667786626691511122LL;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
