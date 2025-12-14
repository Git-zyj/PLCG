#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
short var_1 = (short)-1116;
int var_2 = -765183429;
signed char var_3 = (signed char)-63;
long long int var_5 = 1953589233207850393LL;
short var_6 = (short)-26019;
long long int var_7 = -3438044026092170314LL;
int var_8 = 1103954652;
long long int var_9 = 2161287473362481809LL;
int zero = 0;
short var_10 = (short)12799;
unsigned long long int var_11 = 3183012013748261356ULL;
int var_12 = 99781236;
unsigned long long int var_13 = 6029785874049960181ULL;
int var_14 = -1748190357;
long long int var_15 = -7775153978015549182LL;
short var_16 = (short)17020;
signed char var_17 = (signed char)-84;
long long int var_18 = 9077255659304669168LL;
signed char var_19 = (signed char)40;
signed char var_20 = (signed char)42;
short var_21 = (short)-29071;
short var_22 = (short)16391;
long long int var_23 = 4187657866402602198LL;
short arr_3 [10] [10] ;
unsigned long long int arr_6 [19] ;
unsigned long long int arr_10 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-12466 : (short)-31243;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 9423098580536575522ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2618715903613177437ULL : 9761279472112516566ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
