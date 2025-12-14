#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36878;
int var_8 = -298052302;
unsigned short var_11 = (unsigned short)56047;
short var_12 = (short)-4561;
short var_13 = (short)1405;
unsigned short var_15 = (unsigned short)60186;
unsigned int var_19 = 66643505U;
int zero = 0;
unsigned long long int var_20 = 9889307383113521425ULL;
unsigned int var_21 = 2216243235U;
unsigned int var_22 = 2984960483U;
long long int var_23 = -7217249087171520600LL;
short var_24 = (short)8763;
signed char var_25 = (signed char)6;
unsigned int var_26 = 1719592666U;
unsigned int var_27 = 4172326929U;
short var_28 = (short)-4939;
int arr_4 [12] ;
int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -1923132787;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -938693940;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
