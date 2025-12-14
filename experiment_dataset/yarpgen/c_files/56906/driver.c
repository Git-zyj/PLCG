#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2428577814U;
unsigned int var_1 = 1580831772U;
int var_2 = -1755206705;
int var_5 = -1526710322;
signed char var_6 = (signed char)-117;
unsigned long long int var_8 = 5707748152007658589ULL;
int var_11 = 712687762;
int var_14 = -772682221;
int zero = 0;
short var_15 = (short)-17533;
long long int var_16 = -3086547154264639727LL;
int var_17 = 832045340;
unsigned short var_18 = (unsigned short)64316;
unsigned int arr_0 [13] ;
signed char arr_1 [13] ;
_Bool arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2249815817U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
