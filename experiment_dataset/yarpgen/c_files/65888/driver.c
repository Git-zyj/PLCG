#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38991;
short var_2 = (short)404;
unsigned short var_4 = (unsigned short)28702;
unsigned long long int var_7 = 12573513466049418487ULL;
unsigned char var_12 = (unsigned char)138;
int zero = 0;
unsigned char var_14 = (unsigned char)97;
unsigned short var_15 = (unsigned short)42025;
int var_16 = 1207387470;
unsigned char var_17 = (unsigned char)146;
int var_18 = 945606998;
signed char arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-58;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
