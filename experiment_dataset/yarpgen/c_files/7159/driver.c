#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3351327261U;
long long int var_1 = 1466441144584831096LL;
short var_4 = (short)11413;
short var_7 = (short)-9568;
unsigned long long int var_9 = 15995871745480985294ULL;
int zero = 0;
signed char var_11 = (signed char)52;
unsigned short var_12 = (unsigned short)50324;
unsigned long long int var_13 = 4131696875253456228ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -8988486410425655770LL;
long long int var_16 = 2813736258191715746LL;
unsigned int arr_0 [14] ;
short arr_1 [14] [14] ;
unsigned int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 404175195U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (short)40;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 3781910657U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
