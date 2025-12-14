#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)147;
short var_6 = (short)-29927;
unsigned int var_9 = 2275887679U;
unsigned int var_10 = 4260818691U;
unsigned int var_12 = 3953283631U;
unsigned char var_13 = (unsigned char)39;
unsigned int var_17 = 2289292487U;
int zero = 0;
unsigned int var_19 = 598765121U;
unsigned char var_20 = (unsigned char)164;
short var_21 = (short)16012;
unsigned int var_22 = 816442324U;
unsigned int var_23 = 3226704743U;
long long int var_24 = 7449587898941350671LL;
unsigned int var_25 = 3901066299U;
unsigned char arr_2 [24] ;
signed char arr_3 [24] ;
unsigned long long int arr_8 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 4948526898356207854ULL : 1034288135340776596ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
