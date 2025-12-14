#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15810353477072672639ULL;
unsigned int var_1 = 1275376891U;
_Bool var_2 = (_Bool)1;
unsigned char var_7 = (unsigned char)7;
unsigned long long int var_9 = 11425190705920221315ULL;
unsigned int var_10 = 3183991773U;
_Bool var_13 = (_Bool)0;
int var_14 = -814734932;
short var_16 = (short)-17482;
int zero = 0;
unsigned int var_18 = 3738408428U;
unsigned short var_19 = (unsigned short)19680;
long long int var_20 = 5237907283876251964LL;
short var_21 = (short)20490;
signed char var_22 = (signed char)26;
long long int var_23 = 359714380089362363LL;
_Bool var_24 = (_Bool)0;
short var_25 = (short)10483;
unsigned long long int arr_3 [13] [13] ;
signed char arr_4 [11] [11] ;
_Bool arr_8 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 3512844852404549782ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
