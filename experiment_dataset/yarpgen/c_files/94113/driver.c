#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2748195641498630028LL;
unsigned int var_1 = 548002859U;
long long int var_2 = -158410287624363103LL;
unsigned int var_4 = 50814431U;
short var_5 = (short)356;
long long int var_7 = 6729461411167454291LL;
unsigned short var_8 = (unsigned short)46733;
short var_9 = (short)-23519;
unsigned int var_10 = 4257488591U;
unsigned short var_11 = (unsigned short)61229;
int zero = 0;
unsigned int var_13 = 3800931012U;
signed char var_14 = (signed char)-86;
short var_15 = (short)-31412;
long long int var_16 = 4181982524093023743LL;
unsigned int var_17 = 677707578U;
long long int var_18 = -7611990555796992203LL;
int arr_1 [17] ;
unsigned int arr_2 [17] ;
long long int arr_4 [17] [17] [17] ;
unsigned short arr_5 [22] [22] ;
signed char arr_6 [22] ;
unsigned short arr_7 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -1827759756;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 2344537063U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1925976182147388562LL : 7217496018100273522LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)50356;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)37566;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
