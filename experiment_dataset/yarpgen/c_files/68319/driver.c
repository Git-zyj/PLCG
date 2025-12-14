#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
int var_1 = 761113605;
int var_2 = -1523202255;
short var_3 = (short)15287;
int var_4 = -728054419;
short var_5 = (short)-25013;
unsigned long long int var_6 = 8895531740775667640ULL;
unsigned short var_9 = (unsigned short)8050;
int var_10 = 1086651647;
unsigned long long int var_11 = 13021283236607830276ULL;
int zero = 0;
short var_12 = (short)21875;
unsigned int var_13 = 2291801621U;
unsigned int var_14 = 2288867140U;
unsigned int var_15 = 2024889828U;
int var_16 = 1921056462;
int var_17 = -673147826;
int var_18 = -1876820901;
unsigned short var_19 = (unsigned short)35731;
unsigned short var_20 = (unsigned short)50277;
unsigned char var_21 = (unsigned char)12;
int var_22 = 1576619927;
unsigned short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)27188;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
