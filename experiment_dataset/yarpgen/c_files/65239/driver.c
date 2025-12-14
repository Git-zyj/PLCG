#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11980761903378604893ULL;
unsigned long long int var_9 = 6153873030101305895ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 2723254425928696961ULL;
unsigned long long int var_13 = 12883331961934854374ULL;
short var_14 = (short)-9182;
unsigned int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1540276870U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 17389866884361631332ULL;
}

void checksum() {
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
