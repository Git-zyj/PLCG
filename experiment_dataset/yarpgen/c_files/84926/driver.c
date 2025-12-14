#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10443715728800281866ULL;
unsigned char var_6 = (unsigned char)87;
unsigned long long int var_7 = 1698947447298723282ULL;
unsigned char var_8 = (unsigned char)226;
signed char var_9 = (signed char)-26;
unsigned char var_11 = (unsigned char)57;
unsigned char var_12 = (unsigned char)130;
unsigned int var_15 = 2622897387U;
int var_19 = 1589084321;
int zero = 0;
signed char var_20 = (signed char)-106;
unsigned long long int var_21 = 18296682453783574644ULL;
int var_22 = 179491418;
unsigned long long int var_23 = 2924720715999760088ULL;
unsigned char var_24 = (unsigned char)112;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 3286180524349646740ULL;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)39789;
signed char var_29 = (signed char)53;
long long int var_30 = 2091840236769583684LL;
unsigned short var_31 = (unsigned short)24373;
long long int var_32 = -1075721108533933246LL;
unsigned char var_33 = (unsigned char)142;
unsigned short arr_0 [11] [11] ;
unsigned char arr_3 [11] [11] [11] ;
int arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)23187;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = -1330251472;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
