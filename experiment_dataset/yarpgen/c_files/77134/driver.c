#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 666445334U;
int var_1 = 621923772;
long long int var_3 = 3032982502494020372LL;
int var_4 = 49211971;
signed char var_5 = (signed char)61;
short var_10 = (short)10603;
int var_13 = 459539050;
short var_14 = (short)-14920;
int zero = 0;
unsigned char var_17 = (unsigned char)40;
int var_18 = -342204331;
int var_19 = -1755340234;
long long int var_20 = -5394146634983663098LL;
long long int var_21 = -2479773332231538826LL;
unsigned long long int var_22 = 1269022069493973641ULL;
int arr_0 [14] ;
unsigned short arr_4 [14] ;
long long int arr_6 [14] ;
signed char arr_10 [15] ;
int arr_11 [15] ;
signed char arr_7 [14] [14] ;
long long int arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 614506863;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)48202;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -3427545953692331595LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = -945389610;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -3979464094410653467LL : 4925847799514206517LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
