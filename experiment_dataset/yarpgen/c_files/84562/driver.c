#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)40615;
unsigned short var_5 = (unsigned short)16702;
unsigned short var_9 = (unsigned short)4709;
signed char var_11 = (signed char)91;
int zero = 0;
unsigned long long int var_18 = 186616553429133249ULL;
unsigned long long int var_19 = 9557608635932820793ULL;
unsigned long long int var_20 = 9766468087771092525ULL;
unsigned char var_21 = (unsigned char)61;
unsigned short var_22 = (unsigned short)52163;
short var_23 = (short)487;
short arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-1566;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
