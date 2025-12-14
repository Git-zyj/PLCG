#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)5;
_Bool var_3 = (_Bool)0;
int var_4 = 1422992857;
long long int var_6 = -9063680035502920580LL;
unsigned int var_8 = 3371577200U;
signed char var_9 = (signed char)-55;
unsigned char var_11 = (unsigned char)254;
signed char var_12 = (signed char)118;
int zero = 0;
short var_13 = (short)30926;
short var_14 = (short)3660;
long long int var_15 = -3419487990985443977LL;
short arr_1 [17] ;
long long int arr_4 [17] [17] [17] ;
long long int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)-19267;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -7171558331716603276LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -877359571957099157LL : 7679542022725173769LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
