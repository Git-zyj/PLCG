#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15680969921738552873ULL;
long long int var_5 = -3318429679681184191LL;
unsigned long long int var_8 = 12680421532031347209ULL;
unsigned short var_11 = (unsigned short)20490;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = 3164553082155813917LL;
long long int var_15 = 185968907323567045LL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)51346;
int arr_0 [17] [17] ;
unsigned long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -1862048;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 8436050319809238205ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
