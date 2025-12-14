#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
unsigned int var_1 = 4080629510U;
unsigned char var_2 = (unsigned char)212;
unsigned int var_3 = 3297007582U;
int var_4 = -1405349755;
long long int var_6 = 4864588713561962476LL;
unsigned short var_7 = (unsigned short)43862;
unsigned short var_8 = (unsigned short)17122;
unsigned short var_9 = (unsigned short)44645;
unsigned short var_10 = (unsigned short)64522;
short var_12 = (short)-9193;
unsigned long long int var_13 = 1113149105067214366ULL;
unsigned long long int var_14 = 5974996093901216346ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 846303616U;
signed char var_17 = (signed char)-120;
unsigned short var_18 = (unsigned short)43015;
unsigned short var_19 = (unsigned short)34825;
_Bool arr_5 [18] [18] [18] ;
unsigned long long int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 4933254752797114732ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
