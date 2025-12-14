#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48455;
unsigned char var_1 = (unsigned char)106;
unsigned short var_2 = (unsigned short)16306;
signed char var_3 = (signed char)121;
unsigned short var_4 = (unsigned short)17663;
unsigned char var_6 = (unsigned char)39;
int var_7 = -1725195725;
unsigned long long int var_9 = 9188955329345232257ULL;
int var_12 = -1700790135;
unsigned short var_13 = (unsigned short)54182;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 11930175941332613044ULL;
unsigned char var_16 = (unsigned char)8;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)21;
long long int var_19 = 1075521262711931250LL;
unsigned long long int var_20 = 11899794462532350032ULL;
long long int var_21 = -4947989700425401651LL;
int var_22 = -641357404;
short arr_1 [11] [11] ;
unsigned short arr_6 [19] ;
int arr_2 [11] ;
unsigned short arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)1772;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)10967;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 851603372;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)17937;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
