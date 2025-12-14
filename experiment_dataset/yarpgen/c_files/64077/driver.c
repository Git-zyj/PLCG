#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -290678530307506947LL;
unsigned short var_1 = (unsigned short)1038;
unsigned int var_2 = 302398077U;
unsigned short var_3 = (unsigned short)58995;
_Bool var_5 = (_Bool)1;
long long int var_8 = -3887973496825633245LL;
short var_9 = (short)-23083;
int var_10 = 831399781;
short var_11 = (short)4671;
unsigned short var_12 = (unsigned short)60384;
unsigned short var_13 = (unsigned short)27153;
unsigned char var_14 = (unsigned char)142;
int var_17 = 1640954392;
signed char var_18 = (signed char)-115;
int zero = 0;
signed char var_19 = (signed char)85;
unsigned int var_20 = 2744131839U;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)24057;
unsigned short arr_0 [10] [10] ;
unsigned char arr_1 [10] ;
long long int arr_2 [10] [10] ;
unsigned int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)41387;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 6050699854929504426LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 177866459U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
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
