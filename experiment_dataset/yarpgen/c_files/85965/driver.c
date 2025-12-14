#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7875621087399966487LL;
signed char var_4 = (signed char)-40;
short var_5 = (short)18123;
long long int var_7 = -3893710695386124246LL;
unsigned short var_8 = (unsigned short)50598;
signed char var_10 = (signed char)10;
short var_11 = (short)15706;
unsigned short var_13 = (unsigned short)52496;
int zero = 0;
unsigned short var_14 = (unsigned short)7565;
signed char var_15 = (signed char)58;
unsigned short var_16 = (unsigned short)64883;
unsigned short var_17 = (unsigned short)44096;
unsigned char var_18 = (unsigned char)147;
unsigned char var_19 = (unsigned char)178;
_Bool arr_6 [24] [24] [24] ;
int arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = -975417639;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
