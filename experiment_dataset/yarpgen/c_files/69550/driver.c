#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43771;
unsigned int var_2 = 1479236863U;
unsigned short var_8 = (unsigned short)8021;
long long int var_9 = 2901677659573071620LL;
int zero = 0;
unsigned short var_11 = (unsigned short)48250;
unsigned long long int var_12 = 10847360059654476893ULL;
unsigned char var_13 = (unsigned char)151;
long long int var_14 = 3190206590547815439LL;
unsigned short arr_0 [13] ;
long long int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)17728;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -3849708774509350241LL;
}

void checksum() {
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
