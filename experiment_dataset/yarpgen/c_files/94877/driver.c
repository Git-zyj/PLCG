#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1913533132U;
long long int var_8 = -1644874027785006405LL;
unsigned int var_11 = 2789520957U;
unsigned int var_13 = 913228078U;
unsigned int var_16 = 327713432U;
unsigned int var_17 = 2991802541U;
int zero = 0;
long long int var_19 = 6328935931642047445LL;
unsigned int var_20 = 1407651844U;
unsigned int var_21 = 1610556704U;
unsigned int var_22 = 1228714762U;
unsigned int arr_0 [23] ;
long long int arr_3 [23] [23] [23] ;
unsigned int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 838142037U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -4676568075721154929LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 271148628U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
