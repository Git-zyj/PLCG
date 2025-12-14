#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17257282930811579869ULL;
signed char var_6 = (signed char)-100;
long long int var_7 = -4427254051273856846LL;
int zero = 0;
unsigned long long int var_10 = 8058148959913848878ULL;
unsigned int var_11 = 831283931U;
signed char var_12 = (signed char)116;
unsigned char var_13 = (unsigned char)164;
long long int var_14 = 4427312679505868870LL;
short var_15 = (short)24414;
int var_16 = -988141851;
unsigned char arr_1 [20] ;
unsigned int arr_2 [20] ;
unsigned long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 3519334047U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 17804247247570450118ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
