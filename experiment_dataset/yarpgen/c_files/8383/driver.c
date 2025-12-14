#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1911766399U;
unsigned int var_2 = 846376656U;
unsigned char var_3 = (unsigned char)34;
signed char var_4 = (signed char)-6;
long long int var_8 = 7183074916962249190LL;
unsigned char var_9 = (unsigned char)110;
unsigned int var_13 = 1823105126U;
int var_16 = 596928053;
short var_17 = (short)-10551;
int zero = 0;
signed char var_18 = (signed char)112;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)102;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 14667017514143836890ULL;
long long int arr_1 [19] [19] ;
unsigned int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 4450301934488328033LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 380706659U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
