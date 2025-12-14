#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45710;
unsigned short var_1 = (unsigned short)25609;
int var_2 = 1218860723;
long long int var_4 = 5707586425717826843LL;
long long int var_9 = -61023106846220605LL;
int zero = 0;
unsigned char var_10 = (unsigned char)77;
unsigned char var_11 = (unsigned char)189;
short var_12 = (short)24623;
int var_13 = -1722205937;
unsigned short var_14 = (unsigned short)57871;
signed char arr_1 [18] ;
unsigned int arr_3 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2085853939U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
