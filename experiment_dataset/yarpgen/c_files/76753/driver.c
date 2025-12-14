#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = -1453630832;
int var_4 = -425224;
_Bool var_5 = (_Bool)0;
int var_8 = -1140010354;
_Bool var_9 = (_Bool)1;
int var_11 = 850420907;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int var_14 = -149740458;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = 667121797;
int var_18 = -1326037646;
_Bool var_19 = (_Bool)0;
int var_20 = -535517944;
int var_21 = -2121665348;
int var_22 = 1869815884;
_Bool var_23 = (_Bool)0;
int var_24 = 1546545039;
_Bool var_25 = (_Bool)0;
int var_26 = -1374862148;
int var_27 = 1067616708;
int arr_0 [25] [25] ;
int arr_1 [25] ;
int arr_2 [25] [25] ;
int arr_7 [10] [10] ;
int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 841240045;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -985057847;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 756131098;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = -2051200089;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 152265194;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
