#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-1332;
short var_8 = (short)16786;
int var_9 = -586895690;
short var_15 = (short)-26321;
int zero = 0;
unsigned short var_17 = (unsigned short)37725;
short var_18 = (short)-27306;
unsigned char var_19 = (unsigned char)255;
unsigned char var_20 = (unsigned char)159;
unsigned short var_21 = (unsigned short)54069;
int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -930670916;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
