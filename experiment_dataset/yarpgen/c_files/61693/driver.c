#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39379;
long long int var_1 = -6295484108123119212LL;
long long int var_2 = -8845501811355082967LL;
int var_4 = 836313063;
unsigned short var_6 = (unsigned short)48386;
long long int var_7 = 7193445564431762651LL;
signed char var_9 = (signed char)32;
unsigned short var_11 = (unsigned short)46326;
unsigned long long int var_12 = 680456452882482276ULL;
int zero = 0;
short var_13 = (short)-9119;
unsigned char var_14 = (unsigned char)231;
unsigned short var_15 = (unsigned short)50630;
int var_16 = -1847834800;
unsigned short var_17 = (unsigned short)36367;
unsigned char var_18 = (unsigned char)231;
long long int arr_3 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -3522391620768677899LL;
}

void checksum() {
    hash(&seed, var_13);
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
