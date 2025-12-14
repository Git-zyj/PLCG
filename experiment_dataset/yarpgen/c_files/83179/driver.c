#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57688;
unsigned long long int var_2 = 12009856560801067870ULL;
unsigned short var_4 = (unsigned short)20427;
unsigned int var_5 = 2203965123U;
short var_8 = (short)8246;
int zero = 0;
short var_12 = (short)9593;
unsigned long long int var_13 = 2224761594787023964ULL;
unsigned long long int var_14 = 3630562591671065709ULL;
short arr_1 [11] ;
_Bool arr_2 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)18149;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
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
