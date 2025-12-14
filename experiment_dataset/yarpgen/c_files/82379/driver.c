#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20870;
int var_1 = 768965109;
signed char var_2 = (signed char)-93;
unsigned char var_3 = (unsigned char)118;
unsigned char var_5 = (unsigned char)154;
long long int var_6 = 5421638827995162011LL;
unsigned char var_7 = (unsigned char)236;
long long int var_9 = -7405999606384857691LL;
unsigned char var_10 = (unsigned char)83;
unsigned char var_13 = (unsigned char)150;
int zero = 0;
long long int var_16 = -8262338838370587805LL;
int var_17 = 633745660;
signed char var_18 = (signed char)31;
int var_19 = 747373275;
unsigned char arr_0 [11] [11] ;
unsigned char arr_2 [11] ;
unsigned char arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)110 : (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)91 : (unsigned char)84;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
