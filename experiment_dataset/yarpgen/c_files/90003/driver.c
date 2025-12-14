#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28454;
unsigned char var_5 = (unsigned char)204;
unsigned int var_7 = 1484766615U;
long long int var_10 = -6168963778327714376LL;
int zero = 0;
unsigned short var_13 = (unsigned short)10098;
long long int var_14 = 7615155285680198219LL;
short var_15 = (short)-17483;
unsigned char var_16 = (unsigned char)63;
unsigned long long int var_17 = 7415430741077016826ULL;
unsigned char arr_0 [17] ;
unsigned long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 4294870355373008858ULL : 1332813064855923461ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
