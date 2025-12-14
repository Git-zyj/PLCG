#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)146;
unsigned short var_7 = (unsigned short)43123;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_20 = 2638690675555821621LL;
int var_21 = 138854908;
unsigned short var_22 = (unsigned short)34038;
int var_23 = 1385114340;
long long int arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 8004313664554709116LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
