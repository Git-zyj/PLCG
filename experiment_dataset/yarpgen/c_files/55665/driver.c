#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)17334;
unsigned short var_4 = (unsigned short)60445;
unsigned short var_9 = (unsigned short)50148;
long long int var_11 = -1800626492350693211LL;
unsigned short var_12 = (unsigned short)19349;
_Bool var_13 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)36304;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)26097;
unsigned short var_21 = (unsigned short)22817;
unsigned short var_22 = (unsigned short)16953;
long long int var_23 = 8289197105554892307LL;
_Bool arr_2 [13] ;
unsigned short arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)29868;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
