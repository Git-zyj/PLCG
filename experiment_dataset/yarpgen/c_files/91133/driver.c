#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
unsigned char var_1 = (unsigned char)117;
unsigned int var_2 = 1800409076U;
long long int var_4 = 1197157271653011669LL;
unsigned int var_7 = 2040624906U;
long long int var_9 = -6062076655094214775LL;
int zero = 0;
unsigned short var_10 = (unsigned short)55314;
int var_11 = -1915901791;
unsigned long long int var_12 = 9068167192145065974ULL;
unsigned char var_13 = (unsigned char)197;
unsigned long long int var_14 = 18027846092222071657ULL;
unsigned long long int arr_0 [16] ;
signed char arr_2 [16] ;
signed char arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 4670895034956678584ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)11;
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
