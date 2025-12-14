#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14690356069854460842ULL;
int var_2 = -1478298966;
unsigned int var_4 = 4204936529U;
unsigned short var_5 = (unsigned short)11377;
long long int var_8 = 6539149835237724606LL;
unsigned short var_10 = (unsigned short)4583;
long long int var_14 = 7470245974644995200LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)39739;
int var_19 = -330361613;
unsigned short var_20 = (unsigned short)40914;
unsigned long long int var_21 = 14029033326837601094ULL;
short var_22 = (short)-6822;
short var_23 = (short)20635;
signed char var_24 = (signed char)-116;
unsigned short var_25 = (unsigned short)57426;
long long int var_26 = -6981954843821845204LL;
short arr_0 [20] ;
int arr_1 [20] ;
unsigned int arr_3 [14] ;
unsigned char arr_7 [14] [14] [14] ;
unsigned long long int arr_10 [14] ;
unsigned short arr_13 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-10925;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -950746093 : 2058079349;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4159892994U : 3620756431U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)35 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 14963671801169573370ULL : 15209885537567711881ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (unsigned short)58703;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
