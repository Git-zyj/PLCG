#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1874973098U;
unsigned short var_2 = (unsigned short)26146;
unsigned short var_7 = (unsigned short)22191;
short var_9 = (short)-26602;
unsigned int var_16 = 1161094587U;
int zero = 0;
int var_18 = -945081357;
long long int var_19 = 7419572665827568597LL;
unsigned char var_20 = (unsigned char)127;
unsigned short var_21 = (unsigned short)56309;
short var_22 = (short)-27676;
long long int var_23 = 7591211750748461633LL;
short var_24 = (short)6343;
unsigned int arr_0 [15] [15] ;
unsigned short arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 1128652214U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)5536;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
