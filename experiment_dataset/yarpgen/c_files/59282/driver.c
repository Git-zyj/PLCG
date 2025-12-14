#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4011853808015730114LL;
signed char var_4 = (signed char)83;
unsigned short var_7 = (unsigned short)20128;
long long int var_11 = 7622687882484878935LL;
long long int var_12 = 487231530848103173LL;
int zero = 0;
unsigned long long int var_14 = 10255595042047916583ULL;
unsigned int var_15 = 4264183855U;
unsigned int var_16 = 472556103U;
signed char var_17 = (signed char)-6;
unsigned char arr_2 [25] ;
unsigned int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)158 : (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1562308778U : 1024215623U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
