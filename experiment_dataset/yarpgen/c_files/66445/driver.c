#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -33255719;
long long int var_3 = 2291145487238418963LL;
unsigned char var_11 = (unsigned char)127;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_17 = -1535651547657564725LL;
unsigned int var_18 = 1283925660U;
unsigned int var_19 = 4038414100U;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)45;
int var_22 = -1139351870;
signed char var_23 = (signed char)-54;
short var_24 = (short)4208;
_Bool arr_1 [17] ;
long long int arr_4 [17] ;
int arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 6719205469502979304LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = -1578435056;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
