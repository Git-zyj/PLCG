#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18967;
unsigned short var_2 = (unsigned short)40879;
int var_3 = -1515959501;
short var_4 = (short)-9609;
int var_6 = 1103242798;
unsigned short var_7 = (unsigned short)44604;
unsigned int var_9 = 2451793591U;
signed char var_12 = (signed char)-100;
short var_13 = (short)-12872;
int zero = 0;
long long int var_14 = 774419510342035201LL;
short var_15 = (short)-10416;
unsigned int var_16 = 1888480876U;
unsigned int var_17 = 2677569599U;
short var_18 = (short)-14719;
short var_19 = (short)-9192;
short var_20 = (short)18682;
long long int var_21 = 4481314939492131166LL;
int var_22 = -1835238507;
int var_23 = -172761424;
signed char var_24 = (signed char)27;
short var_25 = (short)19448;
_Bool arr_0 [14] ;
int arr_2 [14] [14] ;
unsigned int arr_3 [14] [14] ;
long long int arr_6 [14] [14] ;
int arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 2096871772;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 1780926354U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1654202708489680997LL : -6882255954324179877LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 1149561499;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
