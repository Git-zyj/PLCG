#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6361;
unsigned int var_1 = 4270549211U;
signed char var_5 = (signed char)77;
int var_9 = -2073424861;
long long int var_10 = -3437108596989938524LL;
long long int var_15 = -7424716512107534473LL;
unsigned int var_17 = 577771980U;
int zero = 0;
short var_18 = (short)-29869;
long long int var_19 = 3491379306027955347LL;
short var_20 = (short)-4532;
long long int var_21 = -7671673615624879613LL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-3141;
long long int arr_0 [15] [15] ;
signed char arr_5 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 3102788860232636216LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-117 : (signed char)86;
}

void checksum() {
    hash(&seed, var_18);
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
