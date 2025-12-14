#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-43;
unsigned short var_3 = (unsigned short)61945;
long long int var_4 = -4148299539786097161LL;
unsigned long long int var_5 = 10304821689094041564ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-33;
short var_14 = (short)21030;
signed char var_15 = (signed char)-101;
unsigned char var_16 = (unsigned char)71;
short arr_3 [25] [25] [25] ;
unsigned long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-31527 : (short)18170;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 10593523116552580091ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
