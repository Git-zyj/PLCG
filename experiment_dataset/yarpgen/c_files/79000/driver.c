#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1261990065U;
unsigned long long int var_1 = 961167026805754615ULL;
long long int var_2 = -5150248791892132226LL;
unsigned long long int var_5 = 14394164799882798604ULL;
unsigned long long int var_8 = 1683746072431047798ULL;
unsigned int var_10 = 3945273635U;
int zero = 0;
int var_14 = 1609561398;
unsigned long long int var_15 = 9965450277268414663ULL;
unsigned int var_16 = 2493451769U;
int var_17 = 1042129681;
_Bool arr_0 [20] ;
unsigned short arr_3 [20] [20] ;
int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)49591;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1844441570 : 628785342;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
