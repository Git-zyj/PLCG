#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-32227;
_Bool var_11 = (_Bool)1;
int var_14 = -1157688334;
unsigned short var_18 = (unsigned short)11757;
int zero = 0;
long long int var_20 = -7683877017941773382LL;
unsigned short var_21 = (unsigned short)24796;
unsigned char var_22 = (unsigned char)207;
short var_23 = (short)21563;
unsigned int var_24 = 4199073372U;
unsigned char var_25 = (unsigned char)182;
unsigned char var_26 = (unsigned char)57;
unsigned long long int arr_2 [19] ;
long long int arr_4 [14] ;
unsigned short arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 155843239037309803ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 5591294812584350261LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)57622;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
