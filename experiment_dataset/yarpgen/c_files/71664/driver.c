#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6916441557275391097LL;
unsigned int var_5 = 1566284102U;
long long int var_6 = -5856537579876891341LL;
long long int var_8 = -5111387758780607888LL;
unsigned int var_11 = 3949064252U;
long long int var_13 = 2859657099925567039LL;
unsigned int var_14 = 2011373149U;
int zero = 0;
long long int var_19 = 4317460833746190293LL;
unsigned int var_20 = 1542451022U;
long long int var_21 = 1640124798679467156LL;
long long int arr_0 [22] ;
long long int arr_3 [22] ;
unsigned int arr_4 [22] ;
unsigned int arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1123372777152739816LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1846641821211843855LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 238374272U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 375508315U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
