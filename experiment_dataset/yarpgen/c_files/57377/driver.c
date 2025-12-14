#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55498;
signed char var_2 = (signed char)-70;
unsigned int var_3 = 3053845151U;
unsigned short var_4 = (unsigned short)14073;
unsigned long long int var_5 = 12405840426767103387ULL;
unsigned short var_12 = (unsigned short)2136;
unsigned int var_13 = 1747425835U;
int zero = 0;
unsigned int var_14 = 2252468316U;
unsigned int var_15 = 3406664241U;
unsigned char var_16 = (unsigned char)105;
long long int arr_1 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 2545861748777866101LL;
}

void checksum() {
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
