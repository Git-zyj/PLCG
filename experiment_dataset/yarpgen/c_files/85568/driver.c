#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 4028380404U;
long long int var_9 = 7440986804667233756LL;
short var_11 = (short)29499;
unsigned int var_13 = 524721268U;
signed char var_17 = (signed char)100;
unsigned char var_18 = (unsigned char)164;
int zero = 0;
long long int var_19 = -2968198164461706987LL;
unsigned long long int var_20 = 7393474048759915742ULL;
signed char var_21 = (signed char)-98;
long long int var_22 = 6087461372331064564LL;
_Bool var_23 = (_Bool)1;
long long int var_24 = 7583322030568288840LL;
short var_25 = (short)-29492;
long long int arr_0 [17] [17] ;
unsigned int arr_2 [17] ;
unsigned char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -6322963823132501921LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 1333021458U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned char)3;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
