#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25864;
unsigned long long int var_1 = 14718579401024896208ULL;
short var_2 = (short)11585;
long long int var_3 = 8524214012227852962LL;
short var_6 = (short)-6819;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)72;
unsigned char var_12 = (unsigned char)217;
int zero = 0;
long long int var_13 = 6862223526203183678LL;
unsigned char var_14 = (unsigned char)7;
unsigned long long int var_15 = 18204111940487206556ULL;
signed char var_16 = (signed char)-68;
long long int arr_4 [12] [12] ;
short arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 9099924226948876484LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-18795;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
