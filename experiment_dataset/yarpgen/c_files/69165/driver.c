#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3995537962982496730LL;
unsigned short var_9 = (unsigned short)34981;
short var_10 = (short)10780;
unsigned long long int var_11 = 17985859950227814799ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)42780;
short var_16 = (short)-15434;
short var_18 = (short)1358;
int zero = 0;
int var_19 = -803354536;
short var_20 = (short)20417;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-18111;
_Bool var_23 = (_Bool)0;
int arr_0 [21] [21] ;
unsigned long long int arr_3 [21] ;
short arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 86040190;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1768674587524632445ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)-1240;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
