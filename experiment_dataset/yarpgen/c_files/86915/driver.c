#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10506863791349874938ULL;
long long int var_4 = 2330610499820505715LL;
short var_6 = (short)-27790;
unsigned int var_7 = 3749969169U;
signed char var_9 = (signed char)-34;
unsigned short var_11 = (unsigned short)15162;
_Bool var_12 = (_Bool)1;
long long int var_14 = -2926105931155353089LL;
unsigned char var_17 = (unsigned char)14;
short var_18 = (short)25424;
int zero = 0;
long long int var_19 = 1953908897692863738LL;
unsigned short var_20 = (unsigned short)36572;
unsigned long long int var_21 = 11843982828739047938ULL;
long long int var_22 = 8053909435591207654LL;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)58176;
_Bool var_25 = (_Bool)0;
unsigned int var_26 = 3934438707U;
unsigned long long int var_27 = 377326397635464094ULL;
int arr_0 [11] ;
unsigned int arr_1 [11] ;
signed char arr_4 [21] ;
_Bool arr_5 [21] [21] ;
unsigned short arr_6 [21] ;
long long int arr_14 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1177137771;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 4071176707U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)6125;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -948097264247420615LL : -6341262433835348895LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
