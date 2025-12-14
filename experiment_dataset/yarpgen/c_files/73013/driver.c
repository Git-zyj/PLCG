#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)43;
int var_3 = 1085440350;
short var_5 = (short)-14917;
unsigned short var_6 = (unsigned short)21716;
int zero = 0;
short var_13 = (short)1564;
int var_14 = 216102154;
int var_15 = -355288325;
short var_16 = (short)9036;
short var_17 = (short)27210;
unsigned int var_18 = 4072275589U;
unsigned int var_19 = 618476275U;
int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1218649908;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
