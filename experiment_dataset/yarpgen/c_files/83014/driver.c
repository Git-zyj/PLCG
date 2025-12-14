#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1105426313;
unsigned char var_3 = (unsigned char)167;
unsigned short var_8 = (unsigned short)20778;
_Bool var_9 = (_Bool)1;
short var_12 = (short)-9690;
signed char var_13 = (signed char)29;
unsigned short var_15 = (unsigned short)38172;
unsigned int var_17 = 4256713256U;
int zero = 0;
short var_20 = (short)-20344;
int var_21 = -1685590682;
unsigned char var_22 = (unsigned char)154;
signed char var_23 = (signed char)104;
short var_24 = (short)-12225;
signed char var_25 = (signed char)45;
unsigned long long int var_26 = 12110580815407253318ULL;
long long int var_27 = -751672674027336430LL;
int var_28 = -952015300;
signed char arr_1 [20] ;
long long int arr_3 [20] [20] [20] ;
unsigned short arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7513069716187486229LL : -9006411695443265099LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)47684;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
