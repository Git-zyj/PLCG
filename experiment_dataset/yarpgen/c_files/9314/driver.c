#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
unsigned short var_2 = (unsigned short)13970;
unsigned char var_3 = (unsigned char)1;
long long int var_4 = 9213655717595635868LL;
signed char var_5 = (signed char)-59;
int var_6 = 399904663;
long long int var_7 = 1162873526615428020LL;
int var_8 = 179027477;
signed char var_9 = (signed char)35;
signed char var_10 = (signed char)108;
int zero = 0;
unsigned short var_11 = (unsigned short)55527;
long long int var_12 = 6713062668555378078LL;
unsigned short var_13 = (unsigned short)54765;
unsigned short arr_0 [10] [10] ;
long long int arr_2 [10] ;
long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)8126;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 9022340566781463036LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -123610857888976722LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
