#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1529153695333083096LL;
signed char var_1 = (signed char)-47;
unsigned short var_3 = (unsigned short)17370;
signed char var_6 = (signed char)91;
long long int var_7 = 24985102954519777LL;
long long int var_8 = 4969840063979986983LL;
long long int var_9 = -4152475010745063361LL;
unsigned short var_10 = (unsigned short)1599;
long long int var_11 = -464436683385336400LL;
long long int var_12 = -3527613327533982938LL;
long long int var_13 = -6135567490568087746LL;
int zero = 0;
signed char var_14 = (signed char)119;
int arr_0 [24] ;
long long int arr_1 [24] ;
long long int arr_2 [24] [24] ;
short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1422229979 : -1815681304;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4835689992896819513LL : -2884734817336848033LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 409121295646431277LL : 5331353736342567151LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)2455 : (short)17708;
}

void checksum() {
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
