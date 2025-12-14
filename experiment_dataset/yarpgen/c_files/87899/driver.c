#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-114;
signed char var_1 = (signed char)-77;
unsigned long long int var_3 = 2565497123421831690ULL;
signed char var_7 = (signed char)103;
unsigned int var_8 = 3134879907U;
long long int var_9 = 3324544502739196576LL;
int zero = 0;
unsigned short var_14 = (unsigned short)29419;
signed char var_15 = (signed char)-61;
long long int var_16 = 3330288974177468013LL;
short arr_0 [11] [11] ;
int arr_1 [11] ;
signed char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)10054;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 263663815;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-21;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
