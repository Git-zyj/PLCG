#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3654674014031755797LL;
int var_5 = -995193354;
unsigned char var_7 = (unsigned char)47;
unsigned int var_10 = 668403888U;
signed char var_12 = (signed char)-49;
unsigned char var_16 = (unsigned char)188;
int zero = 0;
int var_17 = -333126142;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)235;
signed char var_20 = (signed char)58;
int var_21 = -608412864;
unsigned short var_22 = (unsigned short)22650;
unsigned int var_23 = 649261856U;
unsigned short var_24 = (unsigned short)49815;
unsigned int arr_15 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = 1550422829U;
}

void checksum() {
    hash(&seed, var_17);
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
