#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10587003164702616898ULL;
long long int var_1 = -5923645499003589278LL;
long long int var_2 = 6682862274389369827LL;
unsigned char var_3 = (unsigned char)40;
unsigned long long int var_5 = 387655573268975248ULL;
unsigned char var_7 = (unsigned char)155;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)17430;
int var_11 = -1548959532;
unsigned int var_12 = 2830634331U;
signed char var_13 = (signed char)29;
int zero = 0;
unsigned int var_15 = 1434247603U;
unsigned int var_16 = 3353033584U;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 12101033265782825042ULL;
unsigned int var_19 = 2218359013U;
int var_20 = -388648057;
unsigned int arr_0 [12] [12] ;
short arr_1 [12] [12] ;
unsigned short arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1045383179U : 3344010047U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (short)9639;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)28776 : (unsigned short)7579;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
