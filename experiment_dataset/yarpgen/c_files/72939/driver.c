#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1909451561;
int var_6 = -1293071886;
int var_8 = -257651545;
int var_10 = -336556414;
unsigned short var_12 = (unsigned short)36391;
unsigned short var_13 = (unsigned short)1040;
unsigned short var_14 = (unsigned short)16495;
int var_15 = 388881049;
int zero = 0;
int var_16 = 1629584266;
int var_17 = -531003838;
unsigned short var_18 = (unsigned short)2532;
int var_19 = -1659424334;
unsigned short var_20 = (unsigned short)27181;
int var_21 = -482505357;
int var_22 = -119572762;
int var_23 = -705445827;
int arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1056484506;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
