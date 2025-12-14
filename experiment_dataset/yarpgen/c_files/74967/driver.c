#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
_Bool var_1 = (_Bool)0;
short var_4 = (short)32160;
int var_5 = -1804822909;
short var_6 = (short)-24127;
unsigned short var_7 = (unsigned short)10917;
int zero = 0;
long long int var_12 = -1374612274116848546LL;
unsigned char var_13 = (unsigned char)125;
long long int var_14 = -7856440998625954180LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 17766319485220068712ULL;
unsigned long long int var_17 = 3412988673070339505ULL;
_Bool arr_1 [17] [17] ;
unsigned long long int arr_4 [17] [17] [17] ;
unsigned short arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 11814589089048403495ULL : 5314304404753628854ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59951 : (unsigned short)47074;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
