#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2516347152730447719ULL;
int var_1 = 424446963;
_Bool var_2 = (_Bool)1;
int var_3 = -1719966708;
int var_4 = 1195269326;
_Bool var_5 = (_Bool)1;
long long int var_6 = 3961739311845045119LL;
short var_7 = (short)18384;
short var_8 = (short)17268;
int zero = 0;
short var_10 = (short)-12881;
unsigned char var_11 = (unsigned char)113;
_Bool var_12 = (_Bool)1;
long long int var_13 = 3518752571149602545LL;
signed char var_14 = (signed char)-118;
short arr_6 [13] [13] ;
signed char arr_7 [13] [13] ;
int arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-3295;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 636590564;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
