#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 897256749;
unsigned long long int var_1 = 17127484472722611677ULL;
unsigned char var_5 = (unsigned char)27;
unsigned long long int var_6 = 12162147818935645420ULL;
int var_7 = -259151364;
unsigned int var_9 = 4241160353U;
short var_10 = (short)-27502;
short var_11 = (short)-15716;
short var_13 = (short)19195;
int zero = 0;
unsigned long long int var_20 = 5501245905504038256ULL;
short var_21 = (short)-5072;
short var_22 = (short)-15386;
long long int arr_7 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = -4324485937232031947LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
