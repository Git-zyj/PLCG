#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8409205375614743720ULL;
long long int var_3 = -7734206048738197673LL;
long long int var_6 = -7810094414328761507LL;
unsigned char var_9 = (unsigned char)92;
int zero = 0;
unsigned short var_10 = (unsigned short)9387;
signed char var_11 = (signed char)24;
unsigned long long int var_12 = 16269604485251377485ULL;
unsigned long long int var_13 = 8863673863463467173ULL;
int arr_0 [25] ;
unsigned short arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1264180727;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)55275;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
