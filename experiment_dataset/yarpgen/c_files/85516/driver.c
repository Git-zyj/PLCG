#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12389848104819102122ULL;
unsigned long long int var_5 = 17223212634129410244ULL;
unsigned short var_8 = (unsigned short)46191;
int zero = 0;
unsigned int var_18 = 780561277U;
unsigned short var_19 = (unsigned short)33031;
unsigned char var_20 = (unsigned char)241;
unsigned short var_21 = (unsigned short)7041;
unsigned int arr_2 [23] ;
unsigned long long int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 3465167579U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 12845366141343147772ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
