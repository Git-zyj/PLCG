#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7051452855075830659ULL;
_Bool var_2 = (_Bool)0;
int var_3 = 382607332;
unsigned short var_5 = (unsigned short)56997;
long long int var_6 = -8461403713035020163LL;
short var_8 = (short)2019;
unsigned char var_9 = (unsigned char)104;
int zero = 0;
unsigned long long int var_10 = 15116276091442084323ULL;
unsigned long long int var_11 = 12356904182995760010ULL;
short var_12 = (short)10974;
unsigned short var_13 = (unsigned short)47195;
long long int arr_1 [12] ;
signed char arr_2 [12] [12] ;
short arr_7 [12] ;
signed char arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -3285147399388238243LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (short)-24970;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (signed char)-9;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
