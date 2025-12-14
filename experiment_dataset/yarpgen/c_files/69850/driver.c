#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_14 = (signed char)-104;
unsigned short var_17 = (unsigned short)25059;
long long int var_18 = -4020396147231434506LL;
int zero = 0;
unsigned long long int var_19 = 9906090093443315685ULL;
unsigned short var_20 = (unsigned short)57040;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)91;
unsigned long long int var_23 = 13607922821161611565ULL;
int var_24 = 287438289;
unsigned short arr_0 [23] [23] ;
unsigned short arr_3 [20] ;
_Bool arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)47052;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60091 : (unsigned short)19556;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
