#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2107304153U;
int var_5 = 1998717898;
unsigned char var_6 = (unsigned char)246;
unsigned short var_7 = (unsigned short)53577;
long long int var_8 = -3585075737002023890LL;
unsigned char var_9 = (unsigned char)219;
unsigned long long int var_10 = 1970533864557211621ULL;
unsigned long long int var_12 = 13882308429564260568ULL;
unsigned short var_13 = (unsigned short)34415;
unsigned long long int var_14 = 2832643470064196019ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)166;
short var_18 = (short)-20933;
unsigned char var_19 = (unsigned char)232;
unsigned char var_20 = (unsigned char)101;
long long int var_21 = 8097284025573371082LL;
unsigned int var_22 = 3103808268U;
signed char var_23 = (signed char)-63;
signed char var_24 = (signed char)-107;
int var_25 = -285129672;
unsigned char var_26 = (unsigned char)11;
unsigned short var_27 = (unsigned short)32220;
int arr_0 [17] [17] ;
int arr_1 [17] ;
unsigned char arr_2 [17] [17] ;
unsigned char arr_3 [17] ;
unsigned long long int arr_4 [17] [17] ;
unsigned short arr_5 [17] [17] [17] ;
unsigned int arr_6 [17] [17] [17] ;
long long int arr_7 [17] [17] [17] [17] ;
unsigned long long int arr_9 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 2133626180;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 994798202;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)116 : (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 6296762286650858983ULL : 15422042683251819553ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)16317;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 4288814310U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -2390783812891067196LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 16788085490962858798ULL : 14781755137893915319ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
