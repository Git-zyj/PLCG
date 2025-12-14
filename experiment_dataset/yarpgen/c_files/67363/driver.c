#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
int var_1 = -1123389127;
signed char var_2 = (signed char)-71;
int var_3 = 499966593;
_Bool var_4 = (_Bool)0;
long long int var_5 = -2204580233303388903LL;
long long int var_6 = 5846679865425090986LL;
short var_7 = (short)-4764;
unsigned short var_8 = (unsigned short)14736;
unsigned short var_9 = (unsigned short)35699;
unsigned int var_10 = 4242690484U;
short var_12 = (short)25624;
int zero = 0;
short var_13 = (short)-3696;
long long int var_14 = -5418416266618936308LL;
unsigned short var_15 = (unsigned short)58397;
unsigned long long int var_16 = 2544211041546217534ULL;
unsigned int var_17 = 3738483324U;
int var_18 = 1204442297;
signed char arr_0 [20] [20] ;
unsigned short arr_1 [20] ;
signed char arr_2 [20] ;
unsigned short arr_3 [20] ;
unsigned short arr_6 [20] ;
signed char arr_7 [20] [20] [20] ;
unsigned long long int arr_8 [20] [20] [20] [20] ;
signed char arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-12 : (signed char)-40;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20429 : (unsigned short)25453;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-84 : (signed char)37;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)846 : (unsigned short)52070;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)19699 : (unsigned short)60891;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4263300398580261569ULL : 5893848845662638931ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-105 : (signed char)18;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
