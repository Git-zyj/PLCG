#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)17765;
long long int var_7 = 2851166550463815134LL;
unsigned short var_9 = (unsigned short)42567;
short var_12 = (short)-5136;
long long int var_13 = -7165475850587275045LL;
short var_16 = (short)-10021;
int zero = 0;
unsigned short var_18 = (unsigned short)24026;
long long int var_19 = 3272419191953656551LL;
unsigned long long int var_20 = 11496175899011380885ULL;
long long int var_21 = 2899728545992502398LL;
unsigned long long int var_22 = 15660631516926505042ULL;
unsigned int var_23 = 1648733518U;
unsigned char var_24 = (unsigned char)179;
unsigned long long int arr_2 [25] [25] ;
int arr_9 [18] [18] [18] ;
unsigned long long int arr_5 [18] ;
unsigned int arr_10 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 5304842347812352805ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1401274030 : 68883567;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 10085551147079526300ULL : 17934278566214945886ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 3181677564U : 4273664593U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
