#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4190600902U;
_Bool var_5 = (_Bool)0;
long long int var_8 = -1575245636525484035LL;
unsigned char var_16 = (unsigned char)175;
int zero = 0;
unsigned char var_17 = (unsigned char)183;
short var_18 = (short)24743;
unsigned char var_19 = (unsigned char)25;
long long int var_20 = -6903552287740602318LL;
unsigned long long int var_21 = 1496730521253473760ULL;
long long int arr_1 [19] [19] ;
unsigned long long int arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -5874669672232712992LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 13588096454969014342ULL;
}

void checksum() {
    hash(&seed, var_17);
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
