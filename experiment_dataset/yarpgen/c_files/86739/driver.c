#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)59496;
unsigned short var_3 = (unsigned short)57147;
int zero = 0;
unsigned char var_16 = (unsigned char)133;
signed char var_17 = (signed char)-121;
short var_18 = (short)26667;
long long int var_19 = -2411320543474234182LL;
short var_20 = (short)25567;
unsigned int var_21 = 2919720363U;
unsigned long long int var_22 = 3621465641445242392ULL;
unsigned char var_23 = (unsigned char)248;
short var_24 = (short)22937;
long long int var_25 = 3791616176914880207LL;
unsigned char arr_1 [21] [21] ;
long long int arr_4 [11] ;
unsigned short arr_5 [12] ;
unsigned char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 7254364196782614457LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)18376;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)249;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
