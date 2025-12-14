#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6836246355779982659LL;
unsigned long long int var_3 = 3565671055413058152ULL;
int var_6 = 371116962;
unsigned int var_9 = 1294168179U;
unsigned int var_10 = 1284593447U;
int zero = 0;
unsigned int var_11 = 811435237U;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)28135;
signed char var_14 = (signed char)-59;
short arr_0 [14] ;
unsigned long long int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-12375;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 5810072477592597055ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
