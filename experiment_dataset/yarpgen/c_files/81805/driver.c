#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)50648;
short var_9 = (short)29042;
unsigned char var_10 = (unsigned char)49;
signed char var_12 = (signed char)-49;
int zero = 0;
unsigned long long int var_15 = 5430021696666688123ULL;
unsigned long long int var_16 = 10154620400864928165ULL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)51365;
unsigned char var_19 = (unsigned char)240;
_Bool arr_2 [17] ;
unsigned int arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 3538430975U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
