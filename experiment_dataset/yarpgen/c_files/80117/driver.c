#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)5;
short var_3 = (short)26808;
unsigned char var_6 = (unsigned char)150;
unsigned char var_7 = (unsigned char)251;
int zero = 0;
unsigned short var_10 = (unsigned short)35821;
unsigned short var_11 = (unsigned short)45856;
unsigned short var_12 = (unsigned short)17486;
unsigned long long int var_13 = 14498448376569893341ULL;
unsigned short var_14 = (unsigned short)34837;
int arr_1 [10] [10] ;
unsigned int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 1747821318;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 73683061U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
