#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8639;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 7648633202775133919ULL;
signed char var_4 = (signed char)-50;
unsigned short var_5 = (unsigned short)47470;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned short var_13 = (unsigned short)59813;
short var_14 = (short)-17585;
int zero = 0;
int var_16 = -1486797724;
long long int var_17 = 30596006288762304LL;
long long int var_18 = 5328408644034821247LL;
short var_19 = (short)25913;
int var_20 = 4150391;
signed char var_21 = (signed char)-50;
short var_22 = (short)-20483;
long long int arr_0 [22] [22] ;
_Bool arr_1 [22] ;
_Bool arr_4 [22] [22] ;
unsigned short arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? -6485295250864247826LL : 5685625072423399888LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55017 : (unsigned short)37079;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
