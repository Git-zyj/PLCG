#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)118;
unsigned long long int var_3 = 15583970050525002166ULL;
unsigned short var_5 = (unsigned short)55065;
unsigned int var_6 = 404448489U;
unsigned long long int var_7 = 11435344674961025285ULL;
_Bool var_8 = (_Bool)1;
signed char var_11 = (signed char)-42;
short var_12 = (short)12180;
unsigned long long int var_13 = 3548244559553089122ULL;
int zero = 0;
unsigned long long int var_16 = 8324133529648516384ULL;
unsigned short var_17 = (unsigned short)49586;
signed char var_18 = (signed char)70;
unsigned char var_19 = (unsigned char)58;
unsigned short arr_0 [14] [14] ;
signed char arr_1 [14] ;
long long int arr_3 [14] [14] ;
long long int arr_5 [14] [14] [14] ;
unsigned long long int arr_6 [14] ;
unsigned long long int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)20071 : (unsigned short)14823;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -1094483032510451309LL : -977459742273423725LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 8002672487308717342LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 13016327850272165462ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 16976384168094690208ULL : 12947867661447394705ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
