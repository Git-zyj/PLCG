#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_5 = (unsigned short)1384;
signed char var_6 = (signed char)23;
unsigned long long int var_7 = 10591175317292796879ULL;
long long int var_8 = 5507379334394463118LL;
long long int var_9 = -5219451961216491966LL;
unsigned short var_13 = (unsigned short)29263;
int var_15 = -497349103;
int var_17 = -593443418;
int zero = 0;
signed char var_19 = (signed char)-4;
long long int var_20 = -5234168630385123067LL;
short var_21 = (short)-9601;
signed char var_22 = (signed char)58;
long long int var_23 = -5622553640574867621LL;
unsigned long long int var_24 = 16330911763752200533ULL;
unsigned long long int arr_0 [16] ;
signed char arr_1 [16] ;
long long int arr_2 [16] [16] ;
long long int arr_4 [16] ;
_Bool arr_5 [16] ;
_Bool arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1721080169839553036ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -3915481341383144141LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -4636570778359859932LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
