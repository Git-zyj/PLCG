#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9850;
short var_2 = (short)-5020;
_Bool var_8 = (_Bool)1;
int var_12 = 1207920583;
unsigned int var_13 = 393893825U;
long long int var_14 = -8826700961114264576LL;
unsigned char var_17 = (unsigned char)79;
unsigned char var_19 = (unsigned char)125;
int zero = 0;
unsigned int var_20 = 1488321420U;
unsigned char var_21 = (unsigned char)151;
unsigned int var_22 = 2245398515U;
unsigned short var_23 = (unsigned short)2872;
long long int var_24 = -5510294395099099348LL;
unsigned short var_25 = (unsigned short)60739;
long long int var_26 = 5492477417879328539LL;
unsigned int arr_0 [17] ;
int arr_1 [17] ;
short arr_3 [17] ;
int arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 382398472U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -1684588937;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)3483;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 719317753;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
