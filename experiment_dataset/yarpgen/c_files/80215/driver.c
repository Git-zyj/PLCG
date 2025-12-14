#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2093084226;
unsigned short var_5 = (unsigned short)44469;
unsigned long long int var_6 = 919396149694050197ULL;
long long int var_8 = -8533125768826060750LL;
short var_9 = (short)21042;
unsigned long long int var_10 = 4659720797198170515ULL;
unsigned short var_11 = (unsigned short)33561;
int zero = 0;
int var_12 = -432302112;
unsigned char var_13 = (unsigned char)75;
unsigned char var_14 = (unsigned char)103;
long long int var_15 = -8507775732899024488LL;
_Bool arr_0 [14] ;
unsigned long long int arr_1 [14] ;
_Bool arr_2 [14] ;
int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 5822945705009802387ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 1574081029;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
