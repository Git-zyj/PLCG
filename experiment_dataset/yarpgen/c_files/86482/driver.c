#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16146528419634071899ULL;
signed char var_7 = (signed char)-10;
short var_17 = (short)-31303;
int zero = 0;
unsigned char var_20 = (unsigned char)243;
long long int var_21 = -8681200765207797289LL;
_Bool var_22 = (_Bool)1;
unsigned long long int arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 11654450675116409773ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
