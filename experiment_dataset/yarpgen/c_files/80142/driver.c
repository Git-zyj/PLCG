#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3528649498U;
unsigned long long int var_2 = 18345307211648882056ULL;
long long int var_3 = -4200260871860460681LL;
unsigned int var_4 = 2727782282U;
unsigned short var_6 = (unsigned short)63284;
int zero = 0;
unsigned short var_10 = (unsigned short)20983;
unsigned long long int var_11 = 482648056389672502ULL;
long long int var_12 = -1246365647206801794LL;
unsigned short var_13 = (unsigned short)28795;
signed char var_14 = (signed char)115;
unsigned short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)12272;
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
