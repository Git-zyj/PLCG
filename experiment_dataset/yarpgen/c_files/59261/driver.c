#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
short var_1 = (short)10599;
short var_2 = (short)14218;
signed char var_5 = (signed char)52;
int zero = 0;
unsigned long long int var_10 = 4266942762580926673ULL;
unsigned long long int var_11 = 9042972550457235151ULL;
short var_12 = (short)-32097;
unsigned long long int var_13 = 15048551288888277974ULL;
long long int var_14 = -894504663900238414LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 335951565456468850ULL;
unsigned short arr_0 [25] ;
unsigned long long int arr_1 [25] ;
short arr_2 [25] ;
short arr_6 [11] ;
short arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)39705;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1653523059086348697ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-12975;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (short)7289;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-26028;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
