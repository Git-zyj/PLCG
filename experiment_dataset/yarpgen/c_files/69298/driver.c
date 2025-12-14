#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24740;
unsigned long long int var_1 = 5243826898491662294ULL;
int var_2 = 1602445266;
int var_3 = -1691244620;
long long int var_4 = -1662758484782110553LL;
long long int var_5 = -5311385438368112179LL;
short var_6 = (short)-9695;
unsigned char var_7 = (unsigned char)220;
int var_9 = 1698024059;
int zero = 0;
long long int var_10 = 688235292693175367LL;
unsigned char var_11 = (unsigned char)16;
unsigned long long int var_12 = 12997546918292119669ULL;
long long int var_13 = 6907257134704684279LL;
int var_14 = -2010078714;
unsigned long long int arr_1 [14] ;
_Bool arr_2 [14] [14] ;
long long int arr_3 [14] [14] ;
long long int arr_4 [14] ;
unsigned long long int arr_9 [14] ;
short arr_7 [14] [14] ;
short arr_12 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 15606362871045944261ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 8504186757886359178LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 8794824259103928130LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 6089549082187519354ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-18612 : (short)-24125;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-5013;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
