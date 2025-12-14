#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10031705127565274954ULL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3397444560U;
long long int var_7 = -1501044546909802726LL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)49;
_Bool var_14 = (_Bool)0;
unsigned char var_16 = (unsigned char)118;
int zero = 0;
long long int var_18 = 6045733480503821643LL;
short var_19 = (short)12717;
_Bool var_20 = (_Bool)0;
int var_21 = 1503294260;
unsigned short var_22 = (unsigned short)62374;
_Bool arr_1 [16] ;
short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)-5582;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
