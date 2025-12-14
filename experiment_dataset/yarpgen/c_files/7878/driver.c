#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41637;
unsigned char var_1 = (unsigned char)56;
long long int var_2 = -6150273455136819362LL;
long long int var_4 = -7854800905061713451LL;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-60;
unsigned long long int var_11 = 6688700532652500781ULL;
unsigned char var_12 = (unsigned char)145;
int var_13 = -1337063776;
int zero = 0;
int var_14 = 78220299;
unsigned char var_15 = (unsigned char)229;
int var_16 = 1403166118;
short var_17 = (short)8003;
unsigned long long int var_18 = 6495349184942830820ULL;
unsigned int var_19 = 1179489619U;
long long int var_20 = -6331458554216470097LL;
short var_21 = (short)-28343;
unsigned short arr_0 [17] ;
_Bool arr_1 [17] [17] ;
long long int arr_5 [17] [17] [17] ;
signed char arr_10 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)59967;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -5779947772910128088LL : 9203835649746765529LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)89;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
