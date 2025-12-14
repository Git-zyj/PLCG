#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3510579927U;
long long int var_6 = 8303468897664847564LL;
unsigned short var_7 = (unsigned short)38570;
int var_12 = 1953544745;
unsigned long long int var_14 = 12207331017872640017ULL;
unsigned char var_15 = (unsigned char)186;
int zero = 0;
unsigned long long int var_17 = 6673184891995260570ULL;
unsigned long long int var_18 = 5262020888389086759ULL;
unsigned char var_19 = (unsigned char)188;
unsigned char var_20 = (unsigned char)38;
signed char var_21 = (signed char)23;
unsigned short arr_0 [15] ;
short arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)4692;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)-8308;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
