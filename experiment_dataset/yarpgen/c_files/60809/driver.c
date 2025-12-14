#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 400014126U;
short var_1 = (short)12855;
signed char var_3 = (signed char)-90;
unsigned int var_5 = 2929387498U;
signed char var_8 = (signed char)118;
unsigned long long int var_9 = 3066735901594719665ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)180;
int var_12 = -1305927639;
unsigned char var_13 = (unsigned char)219;
signed char var_14 = (signed char)13;
long long int var_15 = 1021074991652917865LL;
long long int arr_0 [10] ;
unsigned char arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -420976983047397687LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)57 : (unsigned char)131;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
