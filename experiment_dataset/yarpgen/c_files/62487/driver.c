#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8839889108224613073LL;
long long int var_1 = -5352180169547790106LL;
unsigned int var_3 = 2128901609U;
unsigned short var_4 = (unsigned short)41018;
unsigned char var_5 = (unsigned char)194;
signed char var_6 = (signed char)1;
long long int var_8 = -3399578274174699965LL;
int var_10 = -162359968;
unsigned int var_11 = 2204657274U;
int zero = 0;
unsigned short var_12 = (unsigned short)31703;
signed char var_13 = (signed char)56;
long long int var_14 = -3162974026177168704LL;
short var_15 = (short)-9096;
short var_16 = (short)-23155;
unsigned short arr_2 [24] [24] ;
unsigned long long int arr_3 [24] [24] ;
signed char arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)61159;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 3250238602158057883ULL : 16518066753025585482ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)39 : (signed char)-44;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
